PST_DIR      := $(strip $(subst /,\, $(CURDIR) ))
ifeq (Config.Mak, $(wildcard Config.Mak))
include Config.Mak
endif

# Default value of project name
ifeq ($(PRJ_NAME),)
 PRJ_NAME := $(basename $(notdir $(PST_DIR)))
endif

include $(BUILD_SCRIPTS_DIR)/build_defs.mak

########################################
# Declare the required targets as PHONY
########################################
.PHONY : rebuild build clean   \
         start_info consistency_checks create_dirs  \
         create_fiellists check_duplicate_files     \
         create_compile_mak create_linker_mak       \
         compile link merge_hex finish_info         \
         gen_chksum_hexfile start_chksum_info       \
         chksum_consistency_checks                  \
         chksum_calculated_hex finish_chksum_info


########################################
# Full run of the build environment
########################################
rebuild : clean   \
          build


############################################
# Incremental run of the build environment
############################################
build   : consistency_checks \
          create_dirs              \
          create_filelists         \
          check_duplicate_files    \
          $(COPY_HEADERS_TST)      \
          $(READ_COMPILER_OPT_TST) \
          create_compile_mak       \
          create_linker_mak        \
          $(DELETE_OBJECTS_TST)    \
          compile                  \
          link                     \
          merge_hex 			   \
          finish_info  

########################################
#Cleans the build generated files
########################################
clean :
#	@$(N_ECHO) # Cleaning build results
	$(PERL) $(REMOVE) $(BUILD_RESULTS_DIR)
#	@$(N_ECHO).&


#########################################################
#generates the checksum hex file for calibrated hex file
#########################################################

gen_chksum_hexfile: start_chksum_info             \
                    clean                         \
                    create_dirs                   \
                    chksum_consistency_checks     \
                    chksum_calculated_hex         \
                    finish_chksum_info  

finish_info :
#	@$(N_ECHO) #---------------------------------------------
	@$(N_ECHO) # Build Tool Chain Completed
#	@$(N_ECHO) # $(shell date /t) at  $(shell time /t)
#	@$(N_ECHO) #---------------------------------------------

start_chksum_info :
	@$(N_ECHO) #---------------------------------------------
	@$(N_ECHO) #
	@$(N_ECHO) # New Eagle Build Tool Chain Started for
	@$(N_ECHO) #      checksum calculation of hex file 
	@$(N_ECHO) # $(shell date /t) at  $(shell time /t)
	@$(N_ECHO) # Build Version - $(BUILD_VERSION)
	@$(N_ECHO) # Current directory - $(PST_DIR)       
	@$(N_ECHO) #
	@$(N_ECHO) #---------------------------------------------

finish_chksum_info :
	@$(N_ECHO) #---------------------------------------------
	@$(N_ECHO) # Build Tool Chain Completed
	@$(N_ECHO) # checksum calculated hex file is generated - $(CHKSUM_CALCULATED_HEX_FILE)
	@$(N_ECHO) # $(shell date /t) at  $(shell time /t)
	@$(N_ECHO) #---------------------------------------------


#perform the consistency checks for mandatory files
consistency_checks :
#	@$(N_ECHO).&
#	@$(N_ECHO) # Checking for the build configuration files
	@if not exist $(COMPILER_OPTIONS_FILE) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # Compiler options configuration file $(COMPILER_OPTIONS_FILE) does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(EXCLUDE_CONFIG_FILE) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # Exclude files/paths configuration file $(EXCLUDE_CONFIG_FILE) does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(RELOCATABLE_INV_FILE) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch RELOCATABLE_INV_FILE does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(ABSOLUTE_INV_FILE) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch ABSOLUTE_INV_FILE does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(MCOP_ADAPTREFS_FILE) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch MCOP_ADAPTREFS_FILE does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(INFOBLOCK_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch INFOBLOCK_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(INPUT_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch INPUT_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(RULE_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch RULE_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(OUTPPUT_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch OUTPPUT_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
#	@$(N_ECHO) # Required build configuration files are found

#Perform consistency checks for the chksum calculation of hex file
chksum_consistency_checks:
#	@$(N_ECHO).&
#	@$(N_ECHO) # Checking for the build configuration files
	@if not exist $(INFOBLOCK_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch INFOBLOCK_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(INPUT_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch INPUT_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(RULE_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch RULE_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(OUTPPUT_MERGE_CFG) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch OUTPPUT_MERGE_CFG does not exist or not configured. &\
		exit 1 \
	)
	@if not exist $(CHKSUM_HEX_FILE) (\
		@$(N_ECHO) # &\
		@$(N_ECHO) # File configured for the switch CHKSUM_HEX_FILE does not exist or not configured. &\
		exit 1 \
	)
#	@$(N_ECHO) # Required build configuration files are found


#Creates the required directories for build
create_dirs:
#	@$(N_ECHO).&
#	@$(N_ECHO) # Creating build output directory structure
	@if not exist $(BUILD_RESULTS_DIR) ( \
		$(MD) $(BUILD_RESULTS_DIR) \
	)
	@if not exist $(BUILD_OUTPUT_DIR) ( \
		$(MD) $(BUILD_OUTPUT_DIR) \
	)
	@if not exist $(BUILD_HEXMOD_DIR) ( \
		$(MD) $(BUILD_HEXMOD_DIR) \
	)
	@if not exist $(BUILD_LOG_DIR) ( \
		$(MD) $(BUILD_LOG_DIR) \
	)
	@if not exist $(BUILD_FILELIST_DIR) ( \
		$(MD) $(BUILD_FILELIST_DIR) \
	)
	@if not exist $(BUILD_OBJECTS_DIR) ( \
		$(MD) $(BUILD_OBJECTS_DIR) \
	)
	@if not exist $(BUILD_LINKER_DIR) ( \
		$(MD) $(BUILD_LINKER_DIR) \
	)
	@if not exist $(BUILD_DEPENDENCY_DIR) ( \
		$(MD) $(BUILD_DEPENDENCY_DIR) \
	)
	@if not exist $(BUILD_HEADER_DIR) ( \
		$(MD) $(BUILD_HEADER_DIR) \
	)
	@if not exist $(BUILD_TST_DIR) ( \
		$(MD) $(BUILD_TST_DIR) \
	)
	@if not exist $(BUILD_TEMP_DIR) ( \
		$(MD) $(BUILD_TEMP_DIR) \
	)
	@if not exist $(BUILD_COMPILER_LOGS) ( \
		$(MD) $(BUILD_COMPILER_LOGS) \
	)
	@if not exist $(BUILD_TOOLS_LOG) ( \
		$(MD) $(BUILD_TOOLS_LOG) \
	)
#	@$(N_ECHO) # Build output directory structure created
#	@$(N_ECHO).&

# Creates the required filelists for processing in build environment
create_filelists :
#	@$(N_ECHO) # File lists creation started
	$(PERL) $(PL_LIST_FILES_CREATE) --in_src_root=$(PST_DIR) --out_c_files=$(LIST_SRC_C_FILES) --out_h_files=$(LIST_SRC_H_FILES) --out_hex_files=$(LIST_SRC_HEX_FILES) --out_obj_files=$(LIST_SRC_OBJ_FILES) --out_master_files=$(LIST_SRC_MASTER_FILES) --in_exclude_file=$(EXCLUDE_CONFIG_FILE) --out_excluded_files=$(LIST_SRC_EXCLUDED_FILES) --out_archive_files=$(LIST_SRC_ARCHIVE_FILES)
#	@$(N_ECHO) # File lists creation finished



# Checks for the duplicate files existence and aborts if duplicate files are found
check_duplicate_files : 
#	@$(N_ECHO) #--------------------------------------------
#	@$(N_ECHO) # Checking for the duplicate files
#	@$(N_ECHO) #--------------------------------------------
	$(PERL) $(PL_CHECK_DUPLICATES) --lst=$(LIST_SRC_MASTER_FILES) --out_dup_list=$(DEPLICATE_FILES_LOG)
#	@$(N_ECHO).&


# Copy project header files for compilation
$(COPY_HEADERS_TST) : $(LIST_SRC_H_FILES)
#	@$(N_ECHO) # Remove deleted project header files from $(BUILD_HEADER_DIR)
	$(PERL) $(DELETE_FILES_PL) -lst $(LIST_SRC_H_FILES) -dir $(BUILD_HEADER_DIR) -cmd $(DELETE_HEADER_CMD)
	$(PERL) $(NEWER_FILES) -i $(LIST_SRC_H_FILES) -dir $(BUILD_HEADER_DIR) -r $(COPY_HEADERS_TST) -n $(TMP_LIST_CHANGED_SRC_H_FILES)
#	@$(N_ECHO) # Copying project header files to $(BUILD_HEADER_DIR)
	$(PERL) $(COPY_FILES_PL) -lst $(TMP_LIST_CHANGED_SRC_H_FILES) -dir $(BUILD_HEADER_DIR) -cmd $(COPY_HEADER_CMD)
	@$(PERL) $(REMOTE_TOUCH) $@
#	@$(N_ECHO).&

#Reads the compiler and linker options
$(READ_COMPILER_OPT_TST) : $(COMPILER_OPTIONS_FILE)
#	@$(N_ECHO) #--------------------------------------------
#	@$(N_ECHO) # Reading compiler options from $(COMPILER_OPTIONS_FILE)
#	@$(N_ECHO) #--------------------------------------------
	$(PERL) $(PL_READ_COMPILER_OPT) --in_compiler_opt=$(COMPILER_OPTIONS_FILE) --out_compier_dump=$(COMPILER_OPTIONS_DUMP_FILE) --out_compier_log=$(READ_COMPILER_OPT_LOG)
	$(PERL) $(REMOVE) $(BUILD_OBJECTS_DIR)
	@if not exist $(BUILD_OBJECTS_DIR) ( \
		$(MD) $(BUILD_OBJECTS_DIR) \
	)
	@$(PERL) $(REMOTE_TOUCH) $@
#	@$(N_ECHO).&

# Create the auto make file for compilation
create_compile_mak :
#	@$(N_ECHO) # Create makefile with the compilation commands
	$(PERL) $(PL_CREATE_COMPILER_MAK) --in_src_c=$(LIST_SRC_C_FILES) --in_compiler_opt=$(COMPILER_OPTIONS_DUMP_FILE) --in_src_obj_list=$(LIST_SRC_OBJ_FILES) --in_src_lib_list=$(LIST_SRC_ARCHIVE_FILES) --out_mak_file=$(COMLILER_MAK) --out_obj_list=$(LIST_GENERATED_OBJECTS_FILES) --out_obj_cmd=$(OBJ_LINKER_CMD_FILE) --out_dependency=$(ALL_DEPENDENCY_FILE)

# Create the auto make file for linking
create_linker_mak :
#	@$(N_ECHO) # Create makefile with the linker commands
	$(PERL) $(PL_CREATE_LINKER_MAK) --in_locate_inv=$(ABSOLUTE_INV_FILE) --in_group_inv=$(RELOCATABLE_INV_FILE) --in_compiler_opt=$(COMPILER_OPTIONS_DUMP_FILE) --in_prj_name=$(PRJ_NAME) --in_mcop_adaptrefs=$(MCOP_ADAPTREFS_FILE) --out_linker_make=$(LINKER_MAK)


#delete the object files for the removed C files.
$(DELETE_OBJECTS_TST) : $(LIST_GENERATED_OBJECTS_FILES)
#	@$(N_ECHO).&
#	@$(N_ECHO) # Remove corresponding object files for the deleted source files from $(BUILD_OBJECTS_DIR)
	$(PERL) $(DELETE_FILES_PL) -lst $(LIST_GENERATED_OBJECTS_FILES) -dir $(BUILD_OBJECTS_DIR) -cmd $(DELETE_OBJECTS_CMD)
#	@$(N_ECHO).&
	@$(PERL) $(REMOTE_TOUCH) $@


# perform the compilation
compile : $(COMLILER_MAK)
	@$(N_ECHO) #--------------------------------------------
	@$(N_ECHO) # Compiling...
#	@$(N_ECHO) #--------------------------------------------
	$(MAKE) -j8 -f $(COMLILER_MAK) COMPILE_TARGETS -s
#	@$(N_ECHO) #--------------------------------------------
#	@$(N_ECHO) # Compilation finished 
	@$(N_ECHO) #--------------------------------------------


# perform the linking
link : $(LINKER_MAK)
#	@$(N_ECHO) #--------------------------------------------
	@$(N_ECHO) # Linking...
#	@$(N_ECHO) #--------------------------------------------
	$(MAKE) -f $(LINKER_MAK) LINKER_TARGETS -s
	@$(N_ECHO).&

# Perform appending of HEX files
merge_hex:
#	@$(N_ECHO) #--------------------------------------------
	@$(N_ECHO) # Merging hex files...
#	@$(N_ECHO) #--------------------------------------------
	@copy $(HEXMOD_ABM_FILE) $(BUILD_HEXMOD_ABM_FILE)
	@copy $(INFOBLOCK_MERGE_CFG) $(BUILD_INFOBLOCK_MERGE_FILE)
	$(PERL) $(CONFIG_HEXMOD_PL) --in_prj_link_hex=$(LINKER_HEX_FILE) --in_src_hex=$(LIST_SRC_HEX_FILES) --in_hexmod_log=$(HEXMOD_LOG) \
                                --in_infoblk_merge=$(BUILD_INFOBLOCK_MERGE_FILE) --in_input_merger=$(INPUT_MERGE_CFG) --in_rule_merger=$(RULE_MERGE_CFG) \
                                --in_abm_file=$(BUILD_HEXMOD_ABM_FILE) --in_output_file=$(OUTPPUT_MERGE_CFG) --out_final_hex=$(FINAL_HEX_FILE)   \
                                --out_input_merger=$(MERGE_INPUT_XML_FILE) --out_output_merger=$(MERGE_OUTPUT_XML_FILE) --out_rule_merger=$(MERGE_RULES_XML_FILE) --chksum_calc_flag=n
	@$(N_ECHO).&
	$(HEXMOD) /$(MERGE_RULES_XML_FILE) > _buildgen/Logs/hexmod_merge.log 2>&1

chksum_calculated_hex: $(CHKSUM_HEX_FILE)
	@$(N_ECHO) #--------------------------------------------
	@$(N_ECHO) # Calculating Checksum for hex file
	@$(N_ECHO) #--------------------------------------------
	@copy $(HEXMOD_ABM_FILE) $(BUILD_HEXMOD_ABM_FILE)
	@copy $(INFOBLOCK_MERGE_CFG) $(BUILD_INFOBLOCK_MERGE_FILE)
	$(PERL) $(CONFIG_HEXMOD_PL) --in_prj_link_hex=$(CHKSUM_HEX_FILE) --in_src_hex=$(LIST_SRC_HEX_FILES) --in_hexmod_log=$(HEXMOD_CHKSUM_LOG) \
                                --in_infoblk_merge=$(BUILD_INFOBLOCK_MERGE_FILE) --in_input_merger=$(INPUT_MERGE_CFG) --in_rule_merger=$(RULE_MERGE_CFG)   \
                                --in_abm_file=$(BUILD_HEXMOD_ABM_FILE) --in_output_file=$(OUTPPUT_MERGE_CFG) --out_final_hex=$(CHKSUM_CALCULATED_HEX_FILE) \
                                --out_input_merger=$(CHKSUM_INPUT_XML_FILE) --out_output_merger=$(CHKSUM_OUTPUT_XML_FILE) --out_rule_merger=$(CHKSUM_RULES_XML_FILE) --chksum_calc_flag=y
	@$(N_ECHO).&
	$(HEXMOD) /$(CHKSUM_RULES_XML_FILE) > _buildgen/Logs/hexmod_chsum.log 2>&1
