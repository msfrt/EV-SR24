#++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
# File Name : Config.Mak
# 
# Description : Contains the switches that are configurable
#
#++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#############################################################################################
# Switch : COMPILER_OPTIONS_FILE
# Value  : path to file - buildconfig\build_cmds.xml
# Info   : compiler and linker options file that shall be used for compilation and linking
COMPILER_OPTIONS_FILE := .\Build_config\compileropt.xml

#############################################################################################
# Switch : EXCLUDE_CONFIG_FILE
# Value  : path to file - Build_config\exclude_config.xml
# Info   : Files listed in file are ignored for build processing
EXCLUDE_CONFIG_FILE   := exclude_config.xml

#############################################################################################
# Switch : PRJ_NAME
# Value  : string
# Info   : Name for the output files to be generated.
PRJ_NAME := NewEagle_ME1735_810D0_8A13

#############################################################################################
# Switch : RELOCATABLE_INV_FILE
# Value  : path to file - buildconfig\group.inv
# Info   : Linker invocation file for relocatable linking
RELOCATABLE_INV_FILE :=.\Build_config\group.inv

#############################################################################################
# Switch : ABSOLUTE_INV_FILE
# Value  : path to the file - buildconfig\locate.inv
# Info   : Linker invocation file for absolute linking
ABSOLUTE_INV_FILE   :=.\Build_config\locate.inv

#############################################################################################
# Switch : INFOBLOCK_MERGE_CFG
# Value  : path to the file - Build_config\infoblock_merge.xml
# Info   : SB, CB, ASW and DS segments addresses 
INFOBLOCK_MERGE_CFG   := .\Build_config\infoblock_merge.xml

#############################################################################################
# Switch : INPUT_MERGE_CFG
# Value  : path to the file - Build_config\input_merge.xml
# Info   : 
INPUT_MERGE_CFG   :=.\Build_config\input_merge.xml

#############################################################################################
# Switch : RULE_MERGE_CFG
# Value  : path to the file - Build_config\rule_merge.xml
# Info   : 
RULE_MERGE_CFG   :=.\Build_config\rule_merge.xml

#############################################################################################
# Switch : OUTPUT_MERGE_CFG
# Value  : path to the file - Build_config\output_merge.xml
# Info   : 
OUTPPUT_MERGE_CFG   :=.\Build_config\output_merge.xml

#############################################################################################
# Switch : MCOP_ADAPTREFS_FILE
# Value  : path to the file - Build_config\mcop_adaptrefs.txt
# Info   : Message copy adaptation to get varied ELF 
MCOP_ADAPTREFS_FILE   :=.\Build_config\mcop_adaptrefs.txt

#############################################################################################
# Switch : CHKSUM_HEX_FILE
# Value  : path to the file - Build_config\chksum_file.hex
# Info   : hex file for calculating checksum
CHKSUM_HEX_FILE   := .\Checksum_File\ME1735_610D_83D00_00.hex
