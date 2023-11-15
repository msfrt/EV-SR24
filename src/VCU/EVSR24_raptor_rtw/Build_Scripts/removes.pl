#! usr/bin/perl

use warnings;
use strict;


my $option = shift;

if (-d $option)
{
	ListDirs($option);
}
if (-f $option)
{
	unlink($option);
}

sub ListDirs
{
	my $directory = shift @_;
	opendir (DIREC, $directory) or die "Directory cannot be opened";
	my @direcs = readdir(DIREC);
	@direcs = map {$directory . '/' . $_} @direcs;
	close(DIREC);
	for (@direcs)
	{
		if (($_ !~ /\/\.$/) && ($_ !~ /\/\.\.$/))
		{
			if (-d $_)
			{
				ListDirs("$_");
			}
			if (-f $_)
			{
				unlink("$_");
			}
		}
	}
	for (@direcs)
	{
		rmdir($_);
	}
}

