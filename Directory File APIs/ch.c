#include <stdio.h>
#include <unistd.h>
int main()
{
	char curr[100];
	if(getcwd(curr,sizeof(curr)))
		printf("Current Working Directory : %s\n",curr);
	else
		printf("Error fetching the current working directory\n");
	if(chdir("/home/ubuntu/Desktop") == 0)
		printf("CWD changed\n");
	else
		printf("Error changing the CWD\n");
	return 0;
}
