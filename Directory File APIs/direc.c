#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
int main()
{
	DIR * dir;
	struct dirent *entry;
	dir = opendir(".");
	if(dir == NULL)
	{
		perror("opendir");	
	}
	while(entry = readdir(dir))
	{
		printf("Entry in the directory : %s\n",entry->d_name);
	}
	closedir(dir);
	return 0;
}
