#include<stdio.h>
#include<unistd.h>

void main()
{
	char* tem[4];
	tem[0]= "/home/exam/CSE39/ex2";
	tem[1] = "hello";
	tem[2] = "world";
	tem[3]= (char*)0;
	
	printf("I am parent pid %d\n",getpid());
	
	execl(tem[0],tem[0],tem[1],tem[2],tem[3],NULL);
	
	printf("This line will not be printed \n");
}
