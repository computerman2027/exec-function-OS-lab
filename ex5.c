#include<stdio.h>
#include<unistd.h>

void main(int argc, char* argv[])
{

	
	printf("I am parent pid %d\n",getpid());
	
	execl(argv[1],argv[2],argv[3],argv[4],(char*)0);
	
	printf("This line will not be printed \n");
}
