#include <stdio.h>

int toggle(int byte,int position)//declaring the arguments
{
    int a;
    a=byte^(1<<position);
    return a;
}
void main()
{
    int a,b,c;
    printf("enter the byte and position");//printing the byte
    scanf("%d %d",&a,&b);//reading the byte
    c=toggle(a,b);//toggle a,b
    printf("%d",c);//printing the byte
}
