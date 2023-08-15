
add()
{
	echo $# # Number of parameters passed
	echo $@ # parameters passed
}

echo $0 # Name of the current process
echo $HOME # Home directory
echo $PATH # Path -> files to read commands from
echo $$ # Process IDs
add 10 20 30 40 50
