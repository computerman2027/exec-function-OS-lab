#include<stdio.h>
#include<unistd.h>

void main()
{
	char* temp[3];
	temp[0]= "ps";
	temp[1] = "-el";
	temp[2]= (char*)0;
	
	printf("I am parent pid %d\n",getpid());
	
	execv("/bin/ps",temp);
	
	printf("This line will not be printed \n");
}
