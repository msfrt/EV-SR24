
# Import necessary modules
use File::Basename;
use strict;
use Getopt::Long;

# Define necessary constants
use constant DUPLICATE_NO => 2;

# Specification of the command line options
my $in_lst = ''; 
my $out_dup_file = '';

GetOptions ('lst=s'          => \$in_lst,
            'out_dup_list=s' => \$out_dup_file
);

# open log file
open(OUTDUPLIST,">$out_dup_file");

# Display error message if the input file list is not found
sub DisplayErrorFileNotFound
{
	print "# Tool DUPLICATE_FILES.PL exit with ERROR :\n";
	print "# File $in_lst not found";
	print OUTDUPLIST "# Tool DUPLICATE_FILES.PL exit with ERROR :\n";
	print OUTDUPLIST "# File $in_lst not found";
	print "# Check the log file $out_dup_file \n#\n";
	exit(1);
}
# End of DisplayErrorFileNotFound

sub CheckFileExistance
{
	my @Files = @_;
	my $Flag = "None";
	my @FileNotFound = ();
	foreach my $File (@Files)
	{
		chomp($File);
		if (-e $File)
		{
				# Do nothing
		}
		else
		{
			$Flag = "True";	
			push(@FileNotFound,"	");
			chomp($File);
			push(@FileNotFound,$File);
			push(@FileNotFound,"\n");
		}
	}	
	if( $Flag =~ m/True/)
	{
		print "\nFollowing files listed in $in_lst is not found\n";
		print @FileNotFound;
		print OUTDUPLIST "\nFollowing files listed in $in_lst is not found\n";
		print OUTDUPLIST @FileNotFound;
		print "# Check the log file $out_dup_file \n #\n";
		return(1);
	}
	else
	{
		return(0);
	}
}
# End of CheckFileExistance

# Check duplicate list
sub CheckDuplicateList
{	
	my $file_list_name = $_[0];
	open('LISTFILES',"<$file_list_name") or die $!;
	# Read all the files into array
	my @filelist;
	@filelist = <LISTFILES>;
	my %map_table;
	my @duplicates;
	my $found='None';
	# Find duplicate entries
	foreach my $item (@filelist)
	{
		my $file_name = basename($item);
		print if !defined $map_table{$file_name};
		$map_table{$file_name}++;
	}
	foreach my $key (keys %map_table)
	{	
		my $value = $map_table{$key};
		if( $value >= DUPLICATE_NO)
		{
			$found = 'Yes';
			push(@duplicates,$key);
		}	
	}
	# Display info in log file
	my @duplicate_list;
	my $count;
	if($found eq 'Yes')
	{
		foreach my $file (@duplicates)
		{
			chomp($file);
			foreach my $temp (@filelist)
			{
				if($temp =~ m/$file$/)
				{
					$count = $count + 1;
					chomp($temp);
					push(@duplicate_list,"	");
					push(@duplicate_list,$temp);
					push(@duplicate_list,"\n");
				}	
			}
			print "File ",$file," is found multiple times","(",$count,")"," in $file_list_name\n";
			print "@duplicate_list\n";
			print OUTDUPLIST "File ",$file," is found multiple times","(",$count,")"," in $file_list_name\n";
			print OUTDUPLIST "@duplicate_list\n";
			#print LOGFILE "@duplicate_list\n";
			@duplicate_list =();
			$count = "";
		}
		close(LISTFILES);
		print "# Check the log file $out_dup_file \n#\n";
		return(1);
	}
	else
	{
		close(LISTFILES);
		return(0);
	}	
}
# End CheckDuplicateList

# Check for existence of input file list  
my $Double = "None";
if (-e $in_lst)
{
	open('INLISTFD',"$in_lst") or die $!;
	my @FileList = <INLISTFD>;
	my $Result = CheckFileExistance(@FileList);
	if ( $Result eq 1)
	{
		exit(1);
	}
	else
	{
		my $Duplicate_found = 1;
		foreach my $files_list (@FileList)
		{
			chomp($files_list);
			$Duplicate_found = CheckDuplicateList($files_list);
			if($Duplicate_found eq 1)
			{
				$Double = "True";
			}
		}
		if ($Double =~ m/True/)
		{
			exit(1);
		}
		else
		{
			exit(0);
		}
	} 
}
else
{
	DisplayErrorFileNotFound();
}
close(OUTDUPLIST);