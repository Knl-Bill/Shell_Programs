#include <stdio.h>
#include <sys/stat.h>

int main()
{
	if(mkdir("New_directory",0755) == 0)
		printf("New directory created\n");
	else
		printf("Error creating a new directory\n");
	if(rmdir("New_directory") == 0)
		printf("Deleted a directory\n");
	else
		printf("Error deleting a directory\n");
	return 0;
}
