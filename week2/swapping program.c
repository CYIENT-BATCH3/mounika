WAP to swap two numbers using function.
#include <stdio.h>
#define pi 3.15//global declaration
int a=30,b=20,temp;//declaration
void fun()
{
    temp=a;
    a=b;
     b=temp;
     
    printf(" before swapping %d %d",a,b);//printing the values
}
void main()
{
    
    fun();//function
    
    
}