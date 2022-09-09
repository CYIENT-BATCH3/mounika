
WAP to print the values using union.
#include <stdio.h>
union sample
{
    int a;
    char c[10];
    float b;
}
main()
{
    union sample s={10,20.4,"ABCDEFGHIJKL"};
    printf("\na=%d",s.a);
    printf("\nb=%f",s.b);
    printf("\nc=%d",s.c);
}
