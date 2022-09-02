// function with no return and with arguments.
#include <stdio.h>
#define pi 3.15//global declaration
int x,y;// variable
void sum(int op1,int op2);//declaration function with arguments
void diff();//declaration function
int main()
{
    printf("enter the values of op1,op2");
    scanf("%d%d",&x,&y);
    sum(x,y);
    diff();// calling function
}
void sum(int op1,int op2)//name of the function for sum
{
    printf("\nsum answer is :%d",op1+op2);
}
void diff()//name of function for sub
{
    sum(x,y);//calling function with arguments
    printf("\nsubracted answer is:%d",x-y);
}

