use strict;

use Getopt::Long;
use File::Basename;

# Specification of the command line options
use vars qw ($opt_lst $opt_dir $opt_cmd );
# Note : Option check from GetOptions() is not as expected
#        (i.ex. missing -l option triggers no option error)
my $result_opt = &GetOptions("-lst=s", "-dir=s", "-cmd=s");

if (! $result_opt)
  {
  die ("$0: Option error\n");
  }

# Prepare fileglob operator and read all (header)files from given directory
my $headerdir   = $opt_dir . '/*.*' ;
   $headerdir   =~ s/^\s*\.\\//mg;
   $headerdir   =~ s/\\/\//g;
my @headerfiles = glob($headerdir);

# Save the copied (header)files into a hash table
my %copied_files;

foreach (@headerfiles)
  {
  my ($filename, , )       = fileparse(lc($_), "");
  $copied_files{$filename} = $_;
  $copied_files{$filename} =~ s/\//\\/g;
  }

# Loop over all files of input file list
open (FILEIN, "<$opt_lst" ) || die( "$0: Cannot open $opt_lst\n");
while (<FILEIN>)
  {
  # Delete actual file if it does exists in given directory
  chomp($_);
  my ($filename, , ) = fileparse($_, "");
  delete($copied_files{$filename}) if (exists $copied_files{$filename});
  }
close(FILEIN);

# Prepare DOS commands lines with remaining files of given directory
my $delete_str = "\@echo off\n";

foreach (sort keys %copied_files)
  {
  $delete_str .= "del /f $copied_files{$_} >nul & if exist $copied_files{$_} exit 1\n";
  }

# Save delete command file
open (FILEOUT, ">$opt_cmd" ) || die( "$0: Cannot open $opt_cmd\n");
print FILEOUT $delete_str;
close (FILEOUT);

# Execute delete command file
if (! -z $opt_cmd)
  {
  system("\"$opt_cmd\"") == 0 || die( "$0: Cannot delete headerfiles\n");
  }

