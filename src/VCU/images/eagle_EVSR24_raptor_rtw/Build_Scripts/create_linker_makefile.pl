use Getopt::Long;
use File::Basename;
use File::Spec;

my $src_locate_inv_file = '';
my $src_gropu_inv_file = '';
my $compiler_options_dump_file = '';
my $mcop_adaptrefs_file = '';
my $linker_make_file = '';
my $project_name = '';
my @error_buff = ();
my $error_flag = 0;
my $Preprocessing_opt = "-C -P -xc -undef -Wundef  ";
GetOptions ('in_locate_inv=s'     => \$src_locate_inv_file,
            'in_group_inv=s'      => \$src_gropu_inv_file,
            'in_compiler_opt=s'   => \$compiler_options_dump_file,
            'in_prj_name=s'       => \$project_name,
            'in_mcop_adaptrefs=s' => \$mcop_adaptrefs_file,
            'out_linker_make=s'   => \$linker_make_file,
);

# Read compiler options
open(OPTIONSIN,"$compiler_options_dump_file");

my $vars;
{
  local $/;
  $vars = <OPTIONSIN>;
}
eval $vars;

my $prj_linker_file = $project_name."_linker.hex";

open(LINKEROUT,">$linker_make_file");
#print LINKEROUT "VPATH = .\\_buildgen\\Linker\n";
#print LINKEROUT ".PHONY: relocatable.elf absolute.elf\n";
print LINKEROUT "-include ._buildgen/Dependency_mak/rel_linker_cmd.mak  _buildgen/Dependency_mak/prj_linker_cmd.mak\n";
print LINKEROUT "LINKER_TARGETS : _buildgen/Linker/rel_linker_cmd.lcf _buildgen/Linker/prj_linker_cmd.lcf relocatable.elf reloc_vared.elf absolute.elf $prj_linker_file \n";

# Preprocessing of group_inv_file
print LINKEROUT "_buildgen/Linker/rel_linker_cmd.lcf : $src_gropu_inv_file \n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
#print LINKEROUT "\t\@echo # Preprocessing of $src_gropu_inv_file\n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t$$compiler_options_dump{COMPILER_PATH}/tricore-cpp.exe $Preprocessing_opt -I- -I_buildgen/Headers -MD -MF _buildgen/Dependency_mak/rel_linker_cmd.mak -DOBJ_DIR=_buildgen/Objects -MT_buildgen/Linker/rel_linker_cmd.lcf $src_gropu_inv_file -o _buildgen/Linker/rel_linker_cmd.lcf\n";
#print LINKEROUT "\t\@echo #\n";

# Preprocessing of locate_inv_file
print LINKEROUT "_buildgen/Linker/prj_linker_cmd.lcf : $src_locate_inv_file \n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
#print LINKEROUT "\t\@echo # Preprocessing of $src_locate_inv_file\n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t$$compiler_options_dump{COMPILER_PATH}/tricore-cpp.exe $Preprocessing_opt -I- -I_buildgen/Headers -MD -MF _buildgen/Dependency_mak/prj_linker_cmd.mak -DOBJ_DIR=_buildgen/Objects -MT_buildgen/Linker/prj_linker_cmd.lcf $src_locate_inv_file -o _buildgen/Linker/prj_linker_cmd.lcf\n";
#print LINKEROUT "\t\@echo #\n";

# Linking to get relocatable ELF file 
print LINKEROUT "relocatable.elf : \n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t\@echo # Linking relocatable ELF file...\n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t$$compiler_options_dump{COMPILER_PATH}/tricore-gcc.exe $$compiler_options_dump{RELOC_LINKER_OPTIONS} -Wl,-T -Wl,_buildgen/Linker/rel_linker_cmd.lcf -Wl,-T -Wl,_buildgen/Linker/obj_linker_cmd.lcf -Wl,-Map -Wl,_buildgen/Linker/relocatable.map -lhtc -o _buildgen/Linker/relocatable.elf\n";
#print LINKEROUT "\t\@echo #\n";

# Varied ELF file generation
print LINKEROUT "reloc_vared.elf : \n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
#print LINKEROUT "\t\@echo # Msgcopy adaptation to get varied ELF file...\n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t$$compiler_options_dump{COMPILER_PATH}/tricore-vared.exe -w -l -efull -i _buildgen/Linker/relocatable.elf -c $mcop_adaptrefs_file -o _buildgen/Linker/reloc_vared.elf";
print LINKEROUT "> _buildgen/Logs/linker_msgcopy_adapt.log 2>&1\n";
#print LINKEROUT "\t\@echo #\n";

# Linking to get absolute ELF file
print LINKEROUT "absolute.elf : \n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t\@echo # Linking absolute ELF file...\n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t$$compiler_options_dump{COMPILER_PATH}/tricore-ld.exe $$compiler_options_dump{ABSOLUTE_LINKER_OPTIONS} -T _buildgen/Linker/prj_linker_cmd.lcf -Map _buildgen/Linker/absolute.map _buildgen/Linker/reloc_vared.elf -o _buildgen/Output/absolute.elf\n";
#print LINKEROUT "\t\@echo #\n";

# generate project linker.hex file
print LINKEROUT "$prj_linker_file : \n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t\@echo # Generating hex file...\n";
#print LINKEROUT "\t\@echo #----------------------------------------------\n";
print LINKEROUT "\t$$compiler_options_dump{COMPILER_PATH}/tricore-objcopy.exe --set-start 0x0000 -R .ram -R .sbRam -R .sb_fix_ram -I elf32-tricore -O ihex _buildgen/Output/absolute.elf  _buildgen/Output/$prj_linker_file\n";
#print LINKEROUT "\t\@echo #\n";

close(LINKEROUT);
close(OPTIONSIN);