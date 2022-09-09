WAP to print double and triple pointers.
#include <stdio.h>

int main()
{
    int a=10,b=20,c=30;
    int *p1;
    int **p2;
    int ***p3;//declaration
    p1=&a;
    p2=&p1;
    p3=&p2;
    printf("\n%d",a);
    printf("value of \n%d",*p1);
    printf("address of \n%d",p1);
    printf("value of \n%d",**p2);
    printf("address of \n%d",p2);
    printf("value of \n%d",***p3);
    printf("address of \n%d",p3);
    return 0;
}

WAP to print null pointer using pointers.
#include <stdio.h>

int main()
{
    int *var=NULL;
    printf("null pointer values is %p",var);
    return 0;
}

WAP to print typecasting using pointers.
#include <stdio.h>

int main()
{
    int a=2;
    float flt=10.54;
    void *ptr;
    ptr =&a;
    printf("after typecasting 1st,a=%d",*(int *)ptr);
    ptr=&flt;
    printf("\nafter typecasting 2nd,flt=%f",*(float *)ptr);
}

wild pointer
#include <stdio.h>

int main()
{
    int *ptr;
    printf("ptr=%d",*ptr);

    return 0;
}

WAP to print value using pointers.
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    printf("values %d\n",a);
    printf("values %d\n",*a);
    printf("values %d\n",(a+3));
    return 0;
}
//WAP to print biggest and smallest using array of pointers.
#include <stdio.h>

int main()
{
    int *a[]={10,20,30,40,50},small,big;
    small=a[0];
    big=a[0];
    for(  int i=0;i<5;i++)
    {
        if(big<a[i])
        {
            big=a[i];
        }
        else if(small>a[i])
        {
            small=a[i];
            
        }
    }
     printf("biggest value is%d\n",big);
     printf("smallest value is%d\n",small);
        
    
    return 0;
    
}
//WAP to print biggest and smallest address using array of pointers.
#include <stdio.h>

int main()
{
    int *a[]={10,20,30,40,50},small,big;
    small=a[0];
    big=a[0];
    for(  int i=0;i<5;i++)
    {
        if(big<a[i])
        {
            big=a[i];
        }
        else if(small>a[i])
        {
            small=a[i];
            
        }
    }
     printf("biggest value is%u\n",&big);
     printf("smallest value is%u\n",&small);
        
    
    return 0;
    
}

WAP to print max value using pointers.
#include <stdio.h>
const int MAX=3;

int main()
{
    int var[]={10,100,200};
    int i,*ptr[MAX];
    for(i=0;i<MAX;i++)
    {
        ptr[i]=&var[i];
    }
    for(i=0;i<MAX;i++)
    {
        printf("value of var[%d]=%d\n",i,*ptr[i]);
        
    }
    return 0;
    
}

