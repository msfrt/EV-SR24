use File::Find;
use File::Basename;
use File::Spec;
use Cwd;

use Getopt::Long;

my @C_Files;
my @C_Filespath;
my @H_Files;
my @H_Filespath;
my @O_Files;
my @O_Filespath;
my @HEX_Files;
my @HEX_Filespath;
my @LINKER_Filespath;
my @Exclude_Files = ();
my @Exclude_Paths_temp = ();
my @Exclude_Paths = ();
my $exclude_flag = 0;
my @Excluded_Files = ();
my @Archive_Files = ();
my @Archive_Paths = ();
my $file_extension = '';
my $excluded_config_content = ();
my $exclude_files_content = '';
my $exclude_paths_content = '';
my $PST_root = ''; 


my $List_master   = '';
my $List_C        = '';
my $List_H        = '';
my $List_HEX      = '';
my $List_OBJ      = '';
my $List_excluded = '';
my $List_exclude_config = '';
my $List_archive = '';


# Specification of the command line options
$ret = &GetOptions ( 'in_src_root=s',        \$PST_root,
                     'in_exclude_file=s',    \$List_exclude_config,
                     'out_c_files=s',        \$List_C,
                     'out_h_files=s',        \$List_H,
                     'out_hex_files=s',      \$List_HEX,
                     'out_obj_files=s',      \$List_OBJ,
                     'out_master_files=s',   \$List_master,
                     'out_excluded_files=s', \$List_excluded,
                     'out_archive_files=s',  \$List_archive);

# Display command line help
if (! $ret)
{
    die "\n" .
        "Error during reading the command options of '$0'\n" .
        "Please see help for a description of the options\n" .
        help();
}

Read_exclude_config();
# Handling exclude paths
Exclude_Paths_handler();
push(@Exclude_Paths,"_buildgen");
# Search PST for the C,H,obj and Hex files
find(\&ListFiles,"$PST_root");


# Create master list file
open(MASTERLIST, ">$List_master");
if(scalar @C_Filespath)
{
	print MASTERLIST $List_C."\n";
}
if(scalar @H_Filespath)
{
	print MASTERLIST $List_H."\n";
}
if(scalar @O_Filespath)
{
	print MASTERLIST $List_HEX."\n";
}
if(scalar @HEX_Filespath)
{
	print MASTERLIST $List_OBJ."\n";
}
close(MASTERLIST);

# Create C files list
open(CFILES,">$List_C");
foreach my $file (@C_Filespath)
{
	my $relPath = File::Spec->abs2rel ($file,$PST_root);
	print CFILES "$relPath";
}
close(CFILES);

# Create H files list
open(HFILES,">$List_H");
foreach my $file (@H_Filespath)
{
	my $relPath = File::Spec->abs2rel ($file,$PST_root);
	print HFILES "$relPath";
}
close(HFILES);

# Create OBJ files list
open(OBJFILES,">$List_OBJ");
foreach my $file (@O_Filespath)
{
	my $relPath = File::Spec->abs2rel ($file,$PST_root);
	print OBJFILES "$relPath";
}
close(OBJFILES);

# Create HEX files list
open(HEXFILES,">$List_HEX");
foreach my $file (@HEX_Filespath)
{
	my $relPath = File::Spec->abs2rel ($file,$PST_root);
	print HEXFILES "$relPath";
}
close(HEXFILES);


# Create excluded files list
open(EXCLUDED,">$List_excluded");
foreach my $file (@Excluded_Files)
{
	if($file !~ m/_buildgen/)
	{
		my $relPath = File::Spec->abs2rel ($file,$PST_root);
		if($relPath =~ m/[A-Za-z0-9]/)
		{
			print EXCLUDED "$relPath\n";
		}
	}
}
close(EXCLUDED);

# Create archive files list
open(ARCHIVE,">$List_archive");
foreach my $file (@Archive_Paths)
{
	if($file !~ m/_buildgen/)
	{
		my $relPath = File::Spec->abs2rel ($file,$PST_root);
		if($relPath =~ m/[A-Za-z0-9]/)
		{
			print ARCHIVE "$relPath";
		}
	}
}
close(ARCHIVE);


# function to scan file system directory 
sub ListFiles
{
	$file_name = $_;
	$exclude_flag = 0;
	my $path_temp = $File::Find::dir;
	$path_temp =~ s@\\@=@g;
	$path_temp =~ s@/@=@g;
	foreach $exe_path (@Exclude_Paths)
	{
		$master = File::Spec->catfile($PST_root,"$exe_path");
		$master =~ s@\\@=@g;
		$master =~ s@/@=@g;
		if($exe_path =~ m/(\*.c)|(\*.h)|(\*.o)|(\*.hex)|(\*.a)/i)
		{
			$exe_path =~ m/.$/;
			$file_extension = substr $exe_path, -1;
			$file_extension =~ s/\*//;
			$exe_path_temp = $master;
			$exe_path_temp =~ s/\*.c$//i;
			$exe_path_temp =~ s/\*.h$//i;
			$exe_path_temp =~ s/\*.o$//i;
			$exe_path_temp =~ s/\*.hex$//i;
			$exe_path_temp =~ s/\*.a$//i;
			$exe_path_temp =~ s/=$//i;
			if($path_temp=~ m/\b$exe_path_temp\b/)
			{
				if($file_name =~ m/$file_extension$/i)
				{
					$exclude_flag = 1;
					push(@Excluded_Files, $File::Find::name);
					$file_extension = '';
				}
			}
			$file_extension = '';
		}
		if($path_temp=~ m/\b$master\b/)
		{
			$exclude_flag = 1;
			push(@Excluded_Files, $File::Find::name);
		}
	}

	foreach $exe_file (@Exclude_Files )
	{
		if ($file_name =~ m/\b$exe_file\b/)
		{
			$exclude_flag = 1;
			push(@Excluded_Files, $File::Find::name);
		}
	}

	if($exclude_flag == 1)
	{
		;
	}
	else
	{
		$exclude_flag = 0;
	# Filter C files
		if($_ =~ /\.c$/i)
		{
			push(@C_Files,$_);
			$path = $File::Find::name ;
			$lwc =lc($path);
			$lwc =~ s/\//\\/g;
			push(@C_Filespath,$lwc."\n");
		}
	# Filter H files
		if($_ =~ /\.h$/i)
		{
			push(@H_Files,$_);
			$path = $File::Find::name ;
			$lwc =lc($path);
			$lwc =~ s/\//\\/g;
			push(@H_Filespath,$lwc."\n");
		}
	# Filter O files
		if($_ =~ /\.o$/i)
		{
			push(@O_Files,$_);
			$path = $File::Find::name ;
			$lwc =lc($path);
			$lwc =~ s/\//\\/g;
			push(@O_Filespath,$lwc."\n");
		}
	# Filter HEX files
		if($_ =~ /\.hex$/i)
		{
			push(@HEX_Files,$_);
			$path = $File::Find::name ;
			$lwc =lc($path);
			$lwc =~ s/\//\\/g;
			push(@HEX_Filespath,$lwc."\n");
		}
	# Filter archive files
		if($_ =~ /\.a$/i)
		{
			push(@Archive_Files,$_);
			$path = $File::Find::name ;
			$lwc =lc($path);
			$lwc =~ s/\//\\/g;
			push(@Archive_Paths,$lwc."\n");
		}
	}
}

# Command line help display or tool usage
sub Help()
{
    print <<"EndOfHelp";

Usage : perl $0 -in_src_root <project root> -out_c_files <file path> -out_h_files <file path> -out_hex_files <file path> -out_master_files <file path>

OPTIONS

-help           display this help and exit

FILES

-in_src_root <project root>     Project root directory listfile

-in_exclude_file <project root>     exclude file path

-out_c_files <file path>        generated output c files list

-out_h_files <file path>        generated output h files list

-out_hex_files <file path>      generated output hex files list

-out_obj_files <file path>      generated output obj files list

-out_master_files <file path>   generated output master files list

-out_excluded_files <file path> generated list file conatining exclided files

EndOfHelp
}

# Function for handling exclude paths

sub Exclude_Paths_handler()
{
	foreach my $eliment (@Exclude_Paths_temp)
	{
		$eliment_temp = $eliment;
		if($eliment_temp =~ m/\*\.\*$/)
		{
		$eliment_temp =~ s/\/\*\.\*$//;
		push(@Exclude_Paths,$eliment_temp);
		next;
		}
		if($eliment_temp =~ m/\.\*$/)
		{
		$eliment_temp =~ s/\/\.\*$//;
		push(@Exclude_Paths,$eliment_temp);
		next;
		}
		push(@Exclude_Paths,$eliment);
	}
}

sub Read_exclude_config()
{
	open(EXCLUDE, $List_exclude_config) or die "error $!";
	$excluded_config_content = $file_contents = do { local $/; <EXCLUDE> };
	$excluded_config_content =~ s/\n//g;
	$excluded_config_content =~ m/<EXCLUDE_FILES>(.*)<\/EXCLUDE_FILES>/;
	$exclude_files_content = $1;
	$exclude_files_content =~ s/<FILE>//g;
	$exclude_files_content =~ s/<\/FILE>//g;

	my @exclude_files = split(' ' , $exclude_files_content) ;

	foreach my $file (@exclude_files)
	{
		$temp_file = $file;
		$temp_file =~ s/\s*//;
		push(@Exclude_Files,$temp_file);
	}

	$excluded_config_content =~ m/<EXCLUDE_PATHS>(.*)<\/EXCLUDE_PATHS>/;
	$exclude_paths_content = $1;
	$exclude_paths_content =~ s/<PATH>//g;
	$exclude_paths_content =~ s/<\/PATH>//g;

	my @exclude_paths = split(' ' , $exclude_paths_content) ;

	foreach my $path (@exclude_paths)
	{
		$temp_path = $path;
		$temp_path =~ s/\s*//;
		push(@Exclude_Paths_temp,$temp_path);
	}
	close(EXCLUDE);
}


