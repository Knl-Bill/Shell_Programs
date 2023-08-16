#include <fcntl.h> // To open a file
#include <unistd.h> // To close a file
#include <stdio.h> // To use the printf function
int main()
{
	int file_descriptor; // Initializes an int variable to store the file descriptor
	file_descriptor = open("exmp.txt",O_RDONLY); // Opens the file
	printf("The file was opened with %d file descriptor\n",file_descriptor);
	close(file_descriptor); // Closes the file
	return 0;
}

