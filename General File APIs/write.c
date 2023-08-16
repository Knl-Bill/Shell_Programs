#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int f_des;
	char file[] = "new_file.txt";
	char data[] = "This is a file data written using the write General file API";
	f_des = open(file,O_WRONLY | O_CREAT);
	printf("The file was opened with %d file descriptor\n",f_des);
	ssize_t bytes = write(f_des,data,sizeof(data));
	if(bytes == -1)
		printf("Write operation unsuccessful\n");
	else
		printf("%zd bytes of data written to the %s file\n",bytes,file);
	close(f_des);	
	return 0;	
}
