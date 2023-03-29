
use strict;
use Getopt::Long;

sub mydie {
   my( $str ) = @_;
   print STDERR "$0: Error: $str\n";
   exit (1);
}

my %options = ('help!' => \&help );

help()
  unless $ARGV[0];
if (! GetOptions( %options)) {
  die "\n" .
      "*** FAILURE: Error during reading the command options of '$0'\n" .
      "Please use option --h for a description of the options\n" .
      "error status: " . warn();
}

# File to remote_touch.
my $file = $ARGV[0];

# Filename for a testfile that gets created to have a time reference that works also on remote machines.
my $testfile = "${file}_timestamp_for_NewEagle_build_use_only!";

# Warn the user, if the testfile already exists.
if (-e $testfile) {
	print "WARNING: File $testfile already exists!\n";
	unlink $testfile;
}

# Write the testfile in order to get the current server time.
open TMP, ">$testfile"
    or mydie "Can not create test file $testfile: $!\n";
close TMP;

# Get the current servertime by stat-ing the testfile.
my ($dev, $ino, $mode, $nlink, $uid, $gid, $rdev, $size, $atime, $mtime, $ctime, $blksize, $blocks)
    = stat $testfile;

# Remove the testfile. We don't need it anymore.
unlink $testfile;


my $now = $mtime;
# Set the modification and access times of file to the modification time of the test file.
utime $now, $now, $file
    or open TMP, ">>$file"
    or mydie "Can not touch file $file: $!\n";

exit (0);

# ---------------- description of usage ----------------

sub help {
    print <<"EndOfHelp";

Usage : perl $0 <file>     Touch <file> setting its modification and access times to the
                           time of the machine where <file> is located.

        perl $0 --help     Display this help and exit.
EndOfHelp
  exit (0);
}
