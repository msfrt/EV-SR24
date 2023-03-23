# Import required modules
use Data::Dumper;
use Getopt::Long;

# Define required global variables
my $List_compileropt_file = '';        # Holds compiler options file name
my $out_compier_dump_file = '';        # Holds output dump file name
my $compiler_options_content = '';     # Holds entire content of the compiler options file
my $reloc_linker_content = '';         # Holds relocatable linker options
my $absolute_linker_content = '';      # Holds absolute linker options
my $compiler_path_string = '';         # Holds compiler path
my $out_compier_log_file = '';
my $error_flag = 0;                    # Flag to set to indicate error
my @error_buff =();                    # Holds all the errors so that errors can de displayed at once
my @compiler_options = ();
my @reloc_linker_options = ();
my @absolute_linker_options = ();

# Specification of the command line options
$ret = &GetOptions ( 'in_compiler_opt=s',  \$List_compileropt_file,
                     'out_compier_dump=s', \$out_compier_dump_file,
                     'out_compier_log=s',  \$out_compier_log_file,
                    );

# Display command line help
if (! $ret)
{
    die "\n" .
        "Error during reading the command options of '$0'\n" .
        "Please see help for a description of the options\n" .
    help();
}


# Read compiler,linker options file to a string
open(COMPILEROPT, $List_compileropt_file) or die "error $!";
$compiler_options_content = do { local $/; <COMPILEROPT> };
close(COMPILEROPT);
$compiler_options_content =~ s/\n//g;

if ($compiler_options_content !~ m/<COMPILER_CONFIGURATION>(.*)<\/COMPILER_CONFIGURATION>/)
{
	if($compiler_options_content !~ m/<COMPILER_CONFIGURATION>/)
	{
		push(@error_buff, "# Begin tag <COMPILER_CONFIGURATION> is missing in the option file\n");
	}
	if($compiler_options_content !~ m/<\/COMPILER_CONFIGURATION>/)
	{
		push(@error_buff, "# End tag </COMPILER_CONFIGURATION> is missing in the option file\n");
	}
	$error_flag = 1;
}

# Parse compiler options
if ($compiler_options_content =~ m/<COMPILER_OPTIONS>(.*)<\/COMPILER_OPTIONS>/)
{
	$compiler_options_content_temp = $1;
}
else
{
	if($compiler_options_content !~ m/<COMPILER_OPTIONS>/)
	{
		push(@error_buff, "# Begin tag <COMPILER_OPTIONS> is missing in the option file\n");
	}
	if($compiler_options_content !~ m/<\/COMPILER_OPTIONS>/)
	{
		push(@error_buff, "# End tag </COMPILER_OPTIONS> is missing in the option file\n");
	}
	$error_flag = 1;
}
$compiler_options_content_temp =~ s/<COMPILER_OPT>//g;
$compiler_options_content_temp =~ s/<\/COMPILER_OPT>//g;

my @compiler_options_temps = split(' ' , $compiler_options_content_temp) ;

foreach my $file (@compiler_options_temps)
{
	$temp_file = $file;
	$temp_file =~ s/\s*//;
	push(@compiler_options,$temp_file);
}

my $compiler_options_string = '';
foreach my $option (@compiler_options)
{
	$compiler_options_string =  $compiler_options_string.$option." ";
}


# Parse relocatable linker options
if($compiler_options_content =~ m/<RELOC_LINKER_OPTIONS>(.*)<\/RELOC_LINKER_OPTIONS>/)
{
	$reloc_linker_content = $1;
}
else
{
	if($compiler_options_content !~ m/<RELOC_LINKER_OPTIONS>/)
	{
		push(@error_buff, "# Begin tag <RELOC_LINKER_OPTIONS> is missing in the option file\n");
	}
	if($compiler_options_content !~ m/<\/RELOC_LINKER_OPTIONS>/)
	{
		push(@error_buff, "# End tag </RELOC_LINKER_OPTIONS> is missing in the option file\n");
	}
	$error_flag = 1;
}
$reloc_linker_content =~ s/<RELOC_LINKER_OPT>//g;
$reloc_linker_content =~ s/<\/RELOC_LINKER_OPT>//g;

my @absolute_linker_content_temps = split(' ' , $reloc_linker_content) ;

foreach my $file (@absolute_linker_content_temps)
{
	$temp_file = $file;
	$temp_file =~ s/\s*//;
	push(@reloc_linker_options,$temp_file);
}

my $reloc_linker_options_string = '';
foreach my $option (@reloc_linker_options)
{
	$reloc_linker_options_string =  $reloc_linker_options_string.$option." ";
}

# Parse absolute linker options
if($compiler_options_content =~ m/<ABSOLUTE_LINKER_OPTIONS>(.*)<\/ABSOLUTE_LINKER_OPTIONS>/)
{
	$absolute_linker_content = $1;
}
else
{
	if($compiler_options_content !~ m/<ABSOLUTE_LINKER_OPTIONS>/)
	{
		push(@error_buff, "# Begin tag <ABSOLUTE_LINKER_OPTIONS> is missing in the option file\n");
	}
	if($compiler_options_content !~ m/<\/ABSOLUTE_LINKER_OPTIONS>/)
	{
		push(@error_buff, "# End tag </ABSOLUTE_LINKER_OPTIONS> is missing in the option file\n");
	}
	$error_flag = 1;
}
$absolute_linker_content =~ s/<ABS_LINKER_OPT>//g;
$absolute_linker_content =~ s/<\/ABS_LINKER_OPT>//g;

my @absolute_linker_content_temps = split(' ' , $absolute_linker_content) ;

foreach my $file (@absolute_linker_content_temps)
{
	$temp_file = $file;
	$temp_file =~ s/\s*//;
	push(@absolute_linker_options,$temp_file);
}

my $absolute_linker_options_string = '';
foreach my $option (@absolute_linker_options)
{
	$absolute_linker_options_string =  $absolute_linker_options_string.$option." ";
}

if($compiler_options_content =~ m/<COMPILER_DIR_PATH>(.*)<\/COMPILER_DIR_PATH>/)
{
	$compiler_path_string = $1;
	if (!( -d $compiler_path_string ))
	{
		$error_flag = 1;
		push(@error_buff, "# ERROR Compiler path configured in compiler options file doesn't exist \n");
		push(@error_buff, "# Configured path  $compiler_path_string \n");
	}
	$compiler_path_string =~ s@/$@@;
	$compiler_path_string =~ s@\\$@@;
	if ($compiler_path_string !~ m/bin/i)
	{
		if($compiler_path_string =~ m@/@)
		{
			$compiler_path_string = $compiler_path_string."/bin";
		}
		if($compiler_path_string =~ m@\\@)
		{
			$compiler_path_string = $compiler_path_string.'\bin';
		}
	}
	if (!(-e $compiler_path_string.'/tricore-gcc.exe'))
	{
		$error_flag = 1;
		push(@error_buff, "# ERROR Compiler path $compiler_path_string".'/tricore-gcc.exe'." doesn't exist \n");
	}
}
else
{
	if($compiler_options_content !~ m/<COMPILER_DIR_PATH>/)
	{
		push(@error_buff, "# Begin tag <COMPILER_DIR_PATH> is missing in the option file\n");
	}
	if($compiler_options_content !~ m/<\/COMPILER_DIR_PATH>/)
	{
		push(@error_buff, "# End tag </COMPILER_DIR_PATH> is missing in the option file\n");
	}
	$error_flag = 1;
}

# Write errors or success messages to log
open(LOGFILE,">$out_compier_log_file");
if($error_flag == 1)
{
	@error_buff = ("# Error in parsing compiler options\n",@error_buff);
	print @error_buff;
	print LOGFILE @error_buff;
	print("# \n" );
	print("# Check log file $out_compier_log_file\n\n" );
	exit 1;
}
else
{
	push (@error_buff,"# Done reading compiler options\n");
	print LOGFILE @error_buff;
}
close(LOGFILE);

# Create a hash with the compiler and linker options to dump it to a file which is given input to a compile.mak creation tool 
my %final_options = ( 'COMPILER_PATH'           => $compiler_path_string,
                      'COMPILER_OPTIONS'        => $compiler_options_string,
                      'RELOC_LINKER_OPTIONS'    => $reloc_linker_options_string,
                      'ABSOLUTE_LINKER_OPTIONS' => $absolute_linker_options_string
);

# Dump created hash to a compiler options dump file
open(DUMP_OPTIONS,">$out_compier_dump_file");
print DUMP_OPTIONS Data::Dumper->Dump([\%final_options],[qw(compiler_options_dump)]);
close(DUMP_OPTIONS);
