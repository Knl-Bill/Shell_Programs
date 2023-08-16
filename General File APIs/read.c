#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int main()
{
	int f_des;
	char buffer[1024];
	f_des = open("new_file.txt",O_RDONLY);
	printf("File was opened with %d file descriptor\n",f_des);
	ssize_t data = read(f_des,buffer, sizeof(buffer));
	if(data == -1)
		printf("Error while reading data\n");
	else{
		printf("Bytes read : %zd\nFile data : %s\n",data,buffer);
	}
	close(f_des);
	return 0;	
}
