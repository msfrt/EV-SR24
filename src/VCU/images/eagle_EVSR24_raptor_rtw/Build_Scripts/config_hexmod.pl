# Import required modules
use Data::Dumper;
use Getopt::Long;

# Define required global variables
my $project_linker_hex = '';        # Holds Name of the project linker files
my $src_hex_list = '';              # Holds name of the HEX files list which are to be merged with project linker file
my $final_hex_file = '';            # Holds name of the final hex file to be generated 
my @hex_files_list = ();            # Buffer to read hex files list
my @prj_liner_content = ();
my $input_merger_file = '';
my $output_merger_file = '';
my $rule_merger_file = '';
my $hexmod_log_file = '';
my $linker_hex_file = '';
my $infoblock_merger_file = '';
my $input_merger_template = '';
my $rule_merger_template = '';
my $output_merger_template = '';
my $abm_file = '';
my $lyt_element = '';
my $chksum_calc_flag = '';
my @mem_elements_content = ();
my @mem_elements = ();
my @def_range_content = ();
my @def_range_elements = ();
my @output_lyt_content = ();

# Specification of the command line options
$ret = &GetOptions ( 'in_prj_link_hex=s',  \$project_linker_hex,
                     'in_src_hex=s',       \$src_hex_list,
                     'in_hexmod_log=s',    \$hexmod_log_file,
                     'in_infoblk_merge=s', \$infoblock_merger_file,
                     'in_input_merger=s',  \$input_merger_template,
                     'in_rule_merger=s',   \$rule_merger_template,
                     'in_abm_file=s',      \$abm_file,
                     'in_output_file=s',   \$output_merger_template,
                     'out_final_hex=s',    \$final_hex_file,
                     'out_input_merger=s', \$input_merger_file,
                     'out_output_merger=s',\$output_merger_file,
                     'out_rule_merger=s',  \$rule_merger_file,
                     'chksum_calc_flag=s', \$chksum_calc_flag
                    );

my $input_begin_message = <<'INPUT_BEGIN_MESSAGE';
<?xml version="1.0" encoding="UTF-8"?>
<CONF xmlns="www.rbin.com/mds-1" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="www.rbin.com/mds-1
.\schemas\baseio.xsd">
<!-- This is the input to the baseio dll -->
	<HEXMOD>
		<BASEIO>
			<INPUT>
INPUT_BEGIN_MESSAGE

my $input_end_message = <<'INPUT_END_MESSAGE';
				</FILEIN>
			</INPUT>
		</BASEIO>
	</HEXMOD>
</CONF>
INPUT_END_MESSAGE

my $output_begin_message = <<'OUTPUT_BEGIN_MESSAGE';
<?xml version="1.0" encoding="UTF-8"?>
<CONF xmlns="www.rbin.com/mds-1" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="www.rbin.com/mds-1
.\schemas\baseio.xsd">
<!-- This is the input to the baseio dll -->
	<HEXMOD>
		<BASEIO>
			<OUTPUT>
			<!-- Here the file type and filename is mentioned with full path -->
OUTPUT_BEGIN_MESSAGE

my $outputt_end_message = <<'OUTPUT_END_MESSAGE';
</FILEOUT>
			</OUTPUT>
		</BASEIO>
	</HEXMOD>
</CONF>
OUTPUT_END_MESSAGE

my $rule_begin_message = <<'RULE_BEGIN_MESSAGE';
<?xml version="1.0" encoding="UTF-8"?>
<CONF xmlns="www.rbin.com/mds-1" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="www.rbin.com/mds-1
.\schemas\rules.xsd">
<!-- This is the input to the hexmod tool -->
	<HEXMOD>
		<ERRMOD>
			<!-- Here the filename of Log File is mentioned with full path -->
RULE_BEGIN_MESSAGE

my $rule_mid_message = <<'RULE_MID_MESSAGE';
			<MSGLOG LVL="1"/>
			<MSGCONSOLE LVL="2"/>
		</ERRMOD>
		<MAINMOD>
<GENERAL>
RULE_MID_MESSAGE

my $rule_end_message = <<'RULE_END_MESSAGE';
			</LOADDLL>
		</MAINMOD>
	</HEXMOD>
</CONF>
RULE_END_MESSAGE

# Read input merger template file for the MEM Elements
open(IN_MEM_ELEMENTS,"$input_merger_template")or die "Error in opening file $input_merger_template";
@mem_elements_content = <IN_MEM_ELEMENTS>;
close(IN_MEM_ELEMENTS);
foreach my $line (@mem_elements_content)
{
	if($line =~ m/<MEM/)
	{
		push(@mem_elements,$line);
	}
}

# Read rule merger template file for the DEF RANGE Elements
open(DEF_RANGE_ELEMENTS,"$rule_merger_template")or die "Error in opening file $rule_merger_template";
@def_range_content = <DEF_RANGE_ELEMENTS>;
close(DEF_RANGE_ELEMENTS);
foreach my $line (@def_range_content)
{
	if($line =~ m/<DEF_RANGE/)
	{
		push(@def_range_elements,$line);
	}
}

# Read output merger template file for the LYT Element
open(OUTPUT_LYT_ELEMENT,"$output_merger_template")or die "Error in opening file $output_merger_template";
@output_lyt_content = <OUTPUT_LYT_ELEMENT>;
close(OUTPUT_LYT_ELEMENT);
foreach my $line (@output_lyt_content)
{
	if($line =~ m/<FILEOUT/)
	{
		$lyt_element = $line;
		last;
	}
}
$lyt_element =~ m/LYT=\".*?\"/;
my $lyt = $&;

# Read list of hex files 
if ($chksum_calc_flag ne "y")
{
	open(IN_LIST_HEX,"$src_hex_list")or die "Error in opening file $src_hex_list";
	@hex_files_list = <IN_LIST_HEX>;
	chomp(@hex_files_list);
}


# Create input merger file
	open(INPUTMERGE,">$input_merger_file");
	print INPUTMERGE $input_begin_message;
if ($chksum_calc_flag eq "y")
{
	print INPUTMERGE "\<FILEIN TYPE=\"IHEX\" NAME=\"$project_linker_hex\" IGNORELINECKS=\"true\" >\n";
}
else
{
	print INPUTMERGE "\<FILEIN TYPE=\"IHEX\" NAME=\"$project_linker_hex\" IGNORELINECKS=\"true\" \/\>\n";
	for(my $i=0; $i <= $#hex_files_list; $i++ )
	{
		if($i == $#hex_files_list)
		{
			print INPUTMERGE "\<FILEIN TYPE=\"IHEX\" NAME=\"$hex_files_list[$i]\" IGNORELINECKS=\"true\" >\n";
		}
		else
		{
			print INPUTMERGE "\<FILEIN TYPE=\"IHEX\" NAME=\"$hex_files_list[$i]\" IGNORELINECKS=\"true\" \/\>\n";
		}
	}
	foreach my $mem_element (@mem_elements)
	{
		print INPUTMERGE $mem_element;
	}
}
	print INPUTMERGE $input_end_message;
	close(INPUTMERGE);



# Create output merger file
open(OUTPUTMERGE,">$output_merger_file");
print OUTPUTMERGE $output_begin_message;
print OUTPUTMERGE "\<FILEOUT TYPE=\"IHEX\" NAME=\"$final_hex_file\" $lyt\>\n";
print OUTPUTMERGE $outputt_end_message;
close(OUTPUTMERGE);

# Create rule merger file
open(RULEMERGE,">$rule_merger_file");
print RULEMERGE $rule_begin_message;
print RULEMERGE "\<LOG FILE=\"$hexmod_log_file\"\/\>\n";;
print RULEMERGE $rule_mid_message;
foreach my $line (@def_range_elements)
{
	print RULEMERGE $line;
}
print RULEMERGE "<\/GENERAL>\n";
print RULEMERGE "\t\t\t<LOADDLL>\n";
print RULEMERGE "\<DLL NAME=\"BaseIO\" CFG=\"$input_merger_file\"\/\>\n";
print RULEMERGE "\<DLL NAME=\"Infoblock\" CFG=\"$infoblock_merger_file\"\/\>\n";
print RULEMERGE "\<DLL NAME=\"ABM\" CFG=\"$abm_file\"\/\>\n";
print RULEMERGE "\<DLL NAME=\"BaseIO\" CFG=\"$output_merger_file\"\/\>\n";
print RULEMERGE $rule_end_message;
close(RULEMERGE);


