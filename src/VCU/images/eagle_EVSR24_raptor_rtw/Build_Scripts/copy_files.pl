use strict;
use Getopt::Long;


my $headerfile;
my $copy_str="\@echo off\n";


# Specification of the command line options
use vars qw ($opt_lst $opt_dir $opt_cmd );
my $result_opt = &GetOptions("-lst=s", "-dir=s", "-cmd=s" );

if (! $result_opt)
{
  die ("$0: Option error\n");
}


# change in path slash to backslash for Windows native "copy" command.
$opt_dir =~ s/\//\\/g;

open (FILEIN, "<$opt_lst" ) || die( "$0: Cannot open $opt_lst\n");
while (<FILEIN>)
{
  chomp();
  $headerfile = $_;
  $headerfile =~ s/\//\\/g;
#
#  using Windows native "copy" command since it changes the access rights from read to read/write 
#  automatically. GNU Util "cp" would maintain the access rights thereby blocking to be overwritten
#  if a headerfile has been touched
#
   $copy_str .= "copy $headerfile $opt_dir >nul || (echo cannot copy $headerfile to $opt_dir && exit 1 )\n";
}
close( FILEIN );


open (FILEOUT, ">$opt_cmd" ) || die( "$0: Cannot open $opt_cmd\n");
print FILEOUT $copy_str;
close ( FILEOUT );


if ( ! -z $opt_cmd ) {
system( "\"$opt_cmd\"" ) == 0 || die( "$0: Cannot copy headerfiles\n");
}

