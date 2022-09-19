//WAP to find square of an number using macro?
//ALGORITM:
start
program to find square of number using macro.
define the macro to find square.
in main function take one integer variable and print the square of that variable.
stop

#include<stdio.h>

#define sqaure(a)  a*a					//macro function for the square of the number

int main()
{
	setbuf(stdout,NULL);			//for compiler 
	int number ;
	printf("\n enter the number : ");		//take user input
	scanf("%d",&number);
	printf("square = %d",square(number));			//call macro function and 
}