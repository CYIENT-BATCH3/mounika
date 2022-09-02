
//WAP to print factorial.
#include <stdio.h>

int factorial();//declaration
int main()
{
    int fact;//declaration
    fact=factorial();//using factorial
    printf("factorial is %d",fact);
}
int factorial()
{
    int num,fact=1;
    printf("enter a number");
    scanf("%d",&num);//reading the number
    for(int i=1;i<=num;i++)//using for loop
    {
        fact=fact*i;
    }
    return fact;
}
    