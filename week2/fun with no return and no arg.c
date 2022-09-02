FUNCTION WITH NO RETURN AND NO ARGUMENT.
#include <stdio.h>
#define pi 3.15 // global declaration
void sum()// name of function for sum
{
    int x=10,y=20;// local declaration
    printf(" sum answer is %d",x+y);
}
void sub()
{
    int x=10,y=20;
    printf("subracted answer is %d",x-y);
}
void mul() // name of function for void
{
    int x=10,y=20;
    printf("multiplication answer is %d",x*y);
}
void main()
{
    sum();
    sub();
    mul();// calling function

}
