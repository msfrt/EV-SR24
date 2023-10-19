use Getopt::Long;
use File::Basename;
use File::Spec;

my $SRC_C_list = '';                     # Holds input C files list name
my $compile_make_path = '';              # Holds name of the compile make file 
my $objects_file_list = '';              # Holds generated objects list file name
my $compiler_options_dump_file = '';     # Holds name of the comiler option file dump
my $objects_file_cmd = '';               # Holds the name of the linker script file to be generated
my $src_obj_list = '';                   # Holds configured objects list file
my $src_lib_list = '';                   # Holds configured library list file
my $dependency_make_file = '';           # Holds name of the make file to be generated with all the dependency make files
my @all_obj_list = ();

# Get all the inputs required
GetOptions ('in_src_c=s'        => \$SRC_C_list,
            'in_compiler_opt=s' => \$compiler_options_dump_file,
            'in_src_obj_list=s' => \$src_obj_list,
            'in_src_lib_list=s' => \$src_lib_list,
            'out_mak_file=s'    => \$compile_make_path,
            'out_obj_list=s'    => \$objects_file_list,
            'out_obj_cmd=s'     => \$objects_file_cmd,
            'out_dependency=s'  => \$dependency_make_file,
);

# Read compiler options from the dump file
open(OPTIONSIN,"$compiler_options_dump_file");

my $vars;
{
  local $/;
  $vars = <OPTIONSIN>;
}
eval $vars;

# Read all the configured C files list to a buffer
open(SRCLIST,"$SRC_C_list");
@SRC_list_files = <SRCLIST>;
close(SRCLIST);

# Read all the configured OBJ files list to a buffer
open(INOBJECTS,"$src_obj_list");
@obj_list_files = <INOBJECTS>;
close(INOBJECTS);

open(OBJECTS,">$objects_file_list");
open(OBJECTSCMD,">$objects_file_cmd");
open(DEPENDENCYOUT,">$dependency_make_file");
if ( (scalar @SRC_list_files) || (scalar @obj_list_files) ){
	print OBJECTSCMD "INPUT (\n";
}

open(COMPILE,">$compile_make_path");

# Create all object files which forms targets in the compiler make file generated 
@OBJ = ();
foreach my $src (@SRC_list_files)
{
	my($filename) = fileparse($src);
	$objname = $filename;
	$objname =~ s/\.c/.o/;
	chop($objname);
	push(@OBJ," _buildgen\\Objects\\$objname");
}

# Create all dependency make files which are required for the incremental run of the build 
my @MAK_files = ();
foreach my $src (@SRC_list_files)
{
	my($filename, $directories, $suffix) = fileparse($src);
	$makname = $filename;
	$makname =~ s/\.c/.mak/;
	chomp($makname);
	push(@MAK_files,"_buildgen/Dependency_mak/$makname");

}

# Write all the targets and dependence make files inclusion to the compiler make file
print COMPILE "COMPILE_TARGETS : ";
foreach my $file_obj (@OBJ)
{
	$file_obj =~ s@\\@/@g;
	print COMPILE $file_obj." ";
}
print COMPILE $file_obj."\n";
print COMPILE "-include $dependency_make_file\n";

foreach my $make_file (@MAK_files)
{
	print DEPENDENCYOUT "-include $make_file\n";
}

# Crate compilation commands
foreach my $src (@SRC_list_files)
{
	my($filename, $directories, $suffix) = fileparse($src);
	$objname = $filename;
	$objname =~ s/\.c/.o/;
	$makname = $filename;
	$makname =~ s/\.c/.mak/;
	chomp($objname);
	chomp($makname);
	chomp($src);
	chomp($filename);
	$src =~ s@\\@/@g;
	$src =~ s@^\./@@;
	print COMPILE "_buildgen/Objects/$objname: $src\n";
	print COMPILE "\t\@echo # Compiling source file : $src\n";
	print COMPILE "\t$$compiler_options_dump{COMPILER_PATH}/tricore-gcc.exe $$compiler_options_dump{COMPILER_OPTIONS} $src -o _buildgen/Objects/$objname -MMD -MF _buildgen/Dependency_mak/$makname ";
#	print COMPILE "> _buildgen/Logs/Compiler/$filename\.log 2>&1\n";
	print COMPILE "2>&1\n";  #send messages to std out
	print OBJECTS ".\\_buildgen\\Objects\\$objname\n";
	push (@all_obj_list, ".\\_buildgen\\Objects\\$objname\n");
}

# obj lcf file creation
@all_obj_list = (@all_obj_list,@obj_list_files);

my %path_file = ();
my @obj_names_extraceted = ();
foreach my $file_path (@all_obj_list)
{
	($dirs,$filename) = $file_path =~ m|^(.*[/\\])([^/\\]+?)$|;
	$path_file{$filename} = $dirs;
	push (@obj_names_extraceted,$filename);

}
print COMPILE "\n";
my $file_path_temp = "";
my @obj_names_sorted = sort @obj_names_extraceted;
foreach my $element (@obj_names_sorted){
	$file_path_temp = $path_file{$element};
	$file_path_temp =~ s@\\@/@g;
	$file_path_temp =~ s@^\./@@;
	print OBJECTSCMD "$file_path_temp"."$element"."\n";
}
if ( (scalar @SRC_list_files) || (scalar @obj_list_files) ){
	print OBJECTSCMD ")\n";
}


my %lib_file_dict = ();
my @lib_files_extraceted = ();
open(LIBFILES,$src_lib_list);
my @lib_files_path = <LIBFILES>;
close(LIBFILES);

if(scalar @lib_files_path)
{
	foreach my $file_path (@lib_files_path)
	{
		($dirs,$filename) = $file_path =~ m|^(.*[/\\])([^/\\]+?)$|;
		$lib_file_dict{$filename} = $dirs;
		push (@lib_files_extraceted,$filename);
	}
	my @lib_names_sorted = sort @lib_files_extraceted;
	print OBJECTSCMD "\nGROUP (\n";
	foreach my $element_lib (@lib_names_sorted){
		$file_path_temp = $lib_file_dict{$element_lib};
		$file_path_temp =~ s@\\@/@g;
		$file_path_temp =~ s@^\./@@;
		print OBJECTSCMD "$file_path_temp"."$element_lib"."\n";
	}
	print OBJECTSCMD ")";
}

# Cloase all the files
close(COMPILE);
close(OBJECTS);
close(OPTIONSIN);
close(OBJECTSCMD);
