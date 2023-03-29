
use strict;
use File::Basename;
use Getopt::Long;


my $file;
my $reference_time = 0;
my $mod_time;
my @newer_than_reference;

# Specification of the command line options
use vars qw ( $opt_i $opt_dir $opt_r $opt_n);
my $result_opt = &GetOptions("-i=s", "-dir=s", "-r=s", "-n=s");

if (! $result_opt)
{
  die ("$0: Option error\n");
}

if (-f $opt_r) {
	$reference_time = (stat ($opt_r))[9];
}


open (IN_LIST,"<$opt_i") or die "Cannot open $opt_i\n";

foreach $file (<IN_LIST>)
{
  chomp $file;

  # Add current file if it is newer than the reference file
  $mod_time = (stat ($file))[9];
 
  if ($mod_time > $reference_time)
  {
    push (@newer_than_reference, $file."\n");
  }
  else
  {
    # Add current file if it does not exists in destination directory
    my ($filename, , ) = fileparse($file, "");
    my $dir_file       = $opt_dir . '/' . $filename;

    if (! -e $dir_file)
    {
      push (@newer_than_reference, $file."\n");
    }
  }
}

close (IN_LIST);


open (NEW_LIST,">$opt_n") or die "Cannot open $opt_n\n";
print NEW_LIST @newer_than_reference;
close (NEW_LIST);
