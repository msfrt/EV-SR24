# Get the PST root directory
PST_DIR      := $(strip $(subst /,\, $(CURDIR) ))

#Configure the Build Version
BUILD_VERSION  := 1.1.0

# Define directory structure macros
BUILD_RESULTS_DIR             := _buildgen
BUILD_OUTPUT_DIR              := $(BUILD_RESULTS_DIR)\Output
BUILD_FILELIST_DIR            := $(BUILD_RESULTS_DIR)\Filelists
BUILD_OBJECTS_DIR             := $(BUILD_RESULTS_DIR)\Objects
BUILD_LINKER_DIR              := $(BUILD_RESULTS_DIR)\linker
BUILD_LOG_DIR                 := $(BUILD_RESULTS_DIR)\Logs
BUILD_COMPILER_LOGS           := $(BUILD_LOG_DIR)\Compiler
BUILD_TOOLS_LOG               := $(BUILD_LOG_DIR)\Tools
BUILD_DEPENDENCY_DIR          := $(BUILD_RESULTS_DIR)\Dependency_mak
BUILD_HEADER_DIR              := $(BUILD_RESULTS_DIR)\Headers
BUILD_HEXMOD_DIR              := $(BUILD_RESULTS_DIR)\Hexmod
BUILD_TST_DIR                 := $(BUILD_RESULTS_DIR)\tst
BUILD_TEMP_DIR                := $(BUILD_RESULTS_DIR)\temp

# Define File list macros
LIST_SRC_C_FILES              := $(BUILD_FILELIST_DIR)\filelist_c_files.lst
LIST_SRC_H_FILES              := $(BUILD_FILELIST_DIR)\filelist_h_files.lst
TMP_LIST_CHANGED_SRC_H_FILES  := $(BUILD_FILELIST_DIR)\filelist_changed_h_files.lst
LIST_SRC_OBJ_FILES            := $(BUILD_FILELIST_DIR)\filelist_obj_files.lst
LIST_SRC_HEX_FILES            := $(BUILD_FILELIST_DIR)\filelist_hex_files.lst
LIST_SRC_EXCLUDED_FILES       := $(BUILD_FILELIST_DIR)\filelist_excluded_files.lst
LIST_SRC_MASTER_FILES         := $(BUILD_FILELIST_DIR)\filelist_master_files.lst
LIST_GENERATED_OBJECTS_FILES  := $(BUILD_FILELIST_DIR)\filelist_generated_objects.lst
LIST_SRC_ARCHIVE_FILES        := $(BUILD_FILELIST_DIR)\filelist_lib_files.lst
OBJ_LINKER_CMD_FILE           := $(BUILD_LINKER_DIR)\obj_linker_cmd.lcf

# Define CMD files which are used for the DOS commands execution
DELETE_HEADER_CMD             := $(BUILD_TEMP_DIR)\delete_header.cmd
DELETE_OBJECTS_CMD            := $(BUILD_TEMP_DIR)\delete_objects.cmd
COPY_HEADER_CMD               := $(BUILD_TEMP_DIR)\copy_header.cmd
COMPILER_OPTIONS_DUMP_FILE    := $(BUILD_TEMP_DIR)\compiler_options_dump.txt

# Tools
PL_LIST_FILES_CREATE          := $(BUILD_SCRIPTS_DIR)\file_list_gen.pl
PL_CHECK_DUPLICATES           := $(BUILD_SCRIPTS_DIR)\duplicate_files.pl
DELETE_FILES_PL               := $(BUILD_SCRIPTS_DIR)\delete_files.pl
COPY_FILES_PL                 := $(BUILD_SCRIPTS_DIR)\copy_files.pl
NEWER_FILES                   := $(BUILD_SCRIPTS_DIR)\newerthan.pl
REMOVE                        := $(BUILD_SCRIPTS_DIR)\removes.pl
PL_READ_COMPILER_OPT          := $(BUILD_SCRIPTS_DIR)\read_compileropt.pl
REMOTE_TOUCH                  := $(BUILD_SCRIPTS_DIR)\remote_touch.pl
PL_CREATE_COMPILER_MAK        := $(BUILD_SCRIPTS_DIR)\Create_compile_makefile.pl
PL_CREATE_LINKER_MAK          := $(BUILD_SCRIPTS_DIR)\create_linker_makefile.pl
CONFIG_HEXMOD_PL              := $(BUILD_SCRIPTS_DIR)\config_hexmod.pl
N_ECHO                        := echo
MD                            := mkdir

# Macros for the generated make files
COMLILER_MAK                  := $(BUILD_RESULTS_DIR)\compile.mak
LINKER_MAK                    := $(BUILD_RESULTS_DIR)\linker.mak
ALL_DEPENDENCY_FILE           := $(BUILD_DEPENDENCY_DIR)\all_dependency.mak
LINKER_DEFS_MAK               := $(BUILD_RESULTS_DIR)\linker_defs.mak

# Time stamp files
COPY_HEADERS_TST              := $(BUILD_TST_DIR)\copy_headers.tst
DELETE_OBJECTS_TST            := $(BUILD_TST_DIR)\delete_objects.tst
READ_COMPILER_OPT_TST         := $(BUILD_TST_DIR)\compiler_options.tst

# Logs
READ_COMPILER_OPT_LOG         := $(BUILD_TOOLS_LOG)\compiler_options.log
DEPLICATE_FILES_LOG           := $(BUILD_TOOLS_LOG)\duplicate_files.log
HEXMOD_LOG                    := $(BUILD_TOOLS_LOG)\hexmod17_merge.log
HEXMOD_CHKSUM_LOG             := $(BUILD_TOOLS_LOG)\hexmod17_chksum.log

LINKER_HEX_FILE               := $(BUILD_OUTPUT_DIR)\$(PRJ_NAME)_linker.hex
FINAL_HEX_FILE                := $(BUILD_OUTPUT_DIR)\$(PRJ_NAME).hex
CHKSUM_CALCULATED_HEX_FILE    := $(BUILD_OUTPUT_DIR)\$(notdir $(basename $(CHKSUM_HEX_FILE)))_chksum.hex

MERGE_INPUT_XML_FILE          := $(BUILD_HEXMOD_DIR)\input_merge.xml
MERGE_RULES_XML_FILE          := $(BUILD_HEXMOD_DIR)\rule_merge.xml
MERGE_OUTPUT_XML_FILE         := $(BUILD_HEXMOD_DIR)\output_merge.xml
BUILD_INFOBLOCK_MERGE_FILE    := $(BUILD_HEXMOD_DIR)\infoblock_merge.xml
CHKSUM_INPUT_XML_FILE         := $(BUILD_HEXMOD_DIR)\input_chksum.xml
CHKSUM_RULES_XML_FILE         := $(BUILD_HEXMOD_DIR)\rule_chksum.xml
CHKSUM_OUTPUT_XML_FILE        := $(BUILD_HEXMOD_DIR)\output_chksum.xml
HEXMOD_ABM_FILE               := $(BUILD_SCRIPTS_DIR)\abm.xml
BUILD_HEXMOD_ABM_FILE         := $(BUILD_HEXMOD_DIR)\abm.xml
