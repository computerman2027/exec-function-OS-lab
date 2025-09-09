#include<stdio.h>
#include<unistd.h>

void main()
{
	char* tem[4];
	tem[0]= "/home/exam/CSE39/LAB PROGRAM/ex2";
	tem[1] = "hello";
	tem[2] = "world";
	tem[3]= (char*)0;
	
	printf("I am parent pid %d\n",getpid());
	
    system("gcc code.c -o ex2");
	execv(tem[0],tem);
	
	printf("This line will not be printed \n");
}
