WAP to swap two numbers without third variable.
#include <stdio.h>
#define pi 3.15
int a=30,b=20;//declaration
void fun()
{
    
    a=a+b; // using function
    b=a-b;
    a=a-b;
    
     
    printf(" before swapping %d %d",a,b); //printing the variables
}
void main()
{
    
    fun();//using function
    
    
}