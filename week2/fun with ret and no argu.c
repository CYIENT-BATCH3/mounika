//function with return and no arguments
#include <stdio.h>
#define pi 3.15//global declaration


int main() 
{
    int q;//declaration function
    q=sub();//doing sub
    printf("sub is %d",q);//print the sub
    
    
    
}
int sub()
{
    int q,p;//declaration function
    printf("enter the values q,p");//printing the function
    scanf("%d%d",&q,&p);//store the function
    
    return (q-p);//its store return function
}