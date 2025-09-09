#include<stdio.h>
#include<unistd.h>

void main()
{
	char* temp[3];
	temp[0]= "ls";
	temp[1] = "-l";
	temp[2]= (char*)0;
	
	printf("I am parent pid %d\n",getpid());
	
	execv("/bin/ls",temp);
	
	printf("This line will not be printed \n");
}
