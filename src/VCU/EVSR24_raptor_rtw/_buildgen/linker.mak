-include ._buildgen/Dependency_mak/rel_linker_cmd.mak  _buildgen/Dependency_mak/prj_linker_cmd.mak
LINKER_TARGETS : _buildgen/Linker/rel_linker_cmd.lcf _buildgen/Linker/prj_linker_cmd.lcf relocatable.elf reloc_vared.elf absolute.elf NewEagle_ME1735_810D0_8A13_linker.hex 
_buildgen/Linker/rel_linker_cmd.lcf : .\Build_config\group.inv 
	C:\\HighTec\\TriCore\bin/tricore-cpp.exe -C -P -xc -undef -Wundef   -I- -I_buildgen/Headers -MD -MF _buildgen/Dependency_mak/rel_linker_cmd.mak -DOBJ_DIR=_buildgen/Objects -MT_buildgen/Linker/rel_linker_cmd.lcf .\Build_config\group.inv -o _buildgen/Linker/rel_linker_cmd.lcf
_buildgen/Linker/prj_linker_cmd.lcf : .\Build_config\locate.inv 
	C:\\HighTec\\TriCore\bin/tricore-cpp.exe -C -P -xc -undef -Wundef   -I- -I_buildgen/Headers -MD -MF _buildgen/Dependency_mak/prj_linker_cmd.mak -DOBJ_DIR=_buildgen/Objects -MT_buildgen/Linker/prj_linker_cmd.lcf .\Build_config\locate.inv -o _buildgen/Linker/prj_linker_cmd.lcf
relocatable.elf : 
	@echo # Linking relocatable ELF file...
	C:\\HighTec\\TriCore\bin/tricore-gcc.exe -mcpu=tc1x-fpu -Wl,-r -nostdlib -Wl,--cref -Wl,--no-demangle -Wl,--extmap=a -LC:\\HighTec\\TriCore\lib\gcc\tricore\3.4.5\tc1x-fpu\libgcc.a  -Wl,-T -Wl,_buildgen/Linker/rel_linker_cmd.lcf -Wl,-T -Wl,_buildgen/Linker/obj_linker_cmd.lcf -Wl,-Map -Wl,_buildgen/Linker/relocatable.map -lhtc -o _buildgen/Linker/relocatable.elf
reloc_vared.elf : 
	C:\\HighTec\\TriCore\bin/tricore-vared.exe -w -l -efull -i _buildgen/Linker/relocatable.elf -c .\Build_config\mcop_adaptrefs.txt -o _buildgen/Linker/reloc_vared.elf> _buildgen/Logs/linker_msgcopy_adapt.log 2>&1
absolute.elf : 
	@echo # Linking absolute ELF file...
	C:\\HighTec\\TriCore\bin/tricore-ld.exe -nostdlib --cref --no-demangle --warn-once --relax-24rel --relax-bdata --extmap=a --warn-section-align --warn-orphan -LC:\\HighTec\\TriCore\tricore\lib\tc1x-fpu\ -ldnk_c -LC:\\HighTec\\TriCore\lib\gcc\tricore\3.4.5\tc1x-fpu\libgcc.a  -T _buildgen/Linker/prj_linker_cmd.lcf -Map _buildgen/Linker/absolute.map _buildgen/Linker/reloc_vared.elf -o _buildgen/Output/absolute.elf
NewEagle_ME1735_810D0_8A13_linker.hex : 
	@echo # Generating hex file...
	C:\\HighTec\\TriCore\bin/tricore-objcopy.exe --set-start 0x0000 -R .ram -R .sbRam -R .sb_fix_ram -I elf32-tricore -O ihex _buildgen/Output/absolute.elf  _buildgen/Output/NewEagle_ME1735_810D0_8A13_linker.hex
