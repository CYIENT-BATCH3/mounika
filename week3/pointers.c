//WAP to print the poniters
1.program to write pointers.
2.declare function with some arguments.
3.in main function write a and b and c variables and pointers variables p1 and p2 and p3.
4.pass the value and address using calling function.
5.define the function coming from calling function.
#include <stdio.h>

int main()
{
    int a=2;//declaring integer
    float b=2.0;//declaring float
    char c='m';//declaring character
    int *p1=&a;//declaring pointers
    float*p2=&b;//delaring pointers to float
    char *p3=&c;//declaring pointers to characters
    printf("\nvalue of a %d",*p1);
    printf("\nvalue of a %f",*p2);
    printf("\n value of a %c",*p3);
}
//WAP to swapping two numbers using pass by value.
1.program to write swapping two numbers using pass by value.
2.declare function with some arguments.
3.in main function write swap.
4.declare function with a and b and temp.
5.print the a and b.
#include <stdio.h>
//function declaration
void swap(int,int);

int main()
{
    swap(3,2);
    return 0;
    
}//function defenition
void swap(int a,int b)
{
    int temp;//declaring function
    temp=a;
    a=b;
    b=temp;
    printf("%d,%d",a,b);
}
#include <stdio.h>

int main()
{
    int *p,number=50;
    int *p1,number1=150;
    p=&number;//stores the address of the number
    p1=&number1;//stores the address of the number1
    printf("address of p variable is %u \n",p);
    printf("value of p variable is %d \n",*p);
    printf("\n%d",*p+*p1);
    ++*p;
    printf("\nvalue of p variable is %d",*p);//printing the address of p variable
}
//WAP to swapping two numbers using pass by reference
1.program to write swapping two numbers using pass by reference.
2.declare function with some arguments.
3.in main function write swap.
4.declare function with a and b and *p and *q.
5.print the *a and*b.
#include <stdio.h>
//function declaration
void swap(int*,int*);//declaring function with two pointer arguments

int main()
{
    int a,b,*p,*q;//declaration
    printf("enter the value of a:");
    scanf("%d",&a);//reading the value
    printf("enter the value of b:");//print the value
    scanf("%d",&b);
    p=&a;//a is assign to p
    q=&b;//b is assign to q
    swap(&a,&b);//passing address of a and b to the swap function
    return 0;
    
}

//function defenition
void swap(int *a,int* b)
{
    int temp;
    temp=*a;//a variable is store the temp
    *a=*b;//b variable is assign to a
    *b=temp;//temp is assign to b
    printf("%d,%d",*a,*b);//printing the a and b values
}


//WAF to return multiple values 
#include <stdio.h>
void result(int*a,int*b,int*c,int*d);
int main()
{
    int x,y,z,v;
    printf("enter all values:");
    scanf("%d %d %d %d",&x,&y,&z,&v);
    result(&x,&y,&z,&v);
}
void result(int*a,int*b,int*c,int*d)
{
    printf("%d %d %d %d ",*a,*b,*c,*d);
}
//WAF to return multiple values .
1.program to write multiple values using pointers.
2.in main function write variables x,y,z,v.
3.print the values.
4.read the x,y,z,v values.
5.use void function using result .
6.print the values using pointers.

#include <stdio.h>
void result(int*a,int*b,float*c,char*d);
int main()
{
    int x,y,z,v;//declaration 
    printf("enter all values:");
    scanf("%d %d %d %d",&x,&y,&z,&v);//reading the values
    result(&x,&y,&z,&v);
}
void result(int*a,int*b,float*c,char*d)
{
    printf("%d %d %f %c ",*a,*b,*c,*d);//print the values
}

//WAP to print the sum of float values using pointers.
1.program to write sum of float values using pointers
2.in main function write  variables.
3.using for loop condition.
4.print the sum values.
5.printing the sum of float values.

#include <stdio.h>
float a[5]={1.3,2.4,3.5,1.2,8.9},n,sum=0,result;

    float avg(float* a1,int n);
    int ap=10,*p;
    void main()
    {
        p=&ap;//declaration
        printf("value:%d",p);
        printf("\nvalue :%d",*p);//print the pointers
       // result=avg(a,5);
    }
    float avg(float* a5,int n)
    {
        for(int k;k<n;k++)
        {
            sum+=a5[k];
        }
        printf("%f",sum);
    }
    
//WAP to print the random numbers using rand function.
1.program to write random numbers using rand function
2.in main function write  variables.
3.using for loop condition.
4.print the rand function.
#include <stdio.h>

int main()
{
    int i;//declaring function
    printf("random number are:\n");
    for(i=0;i<5;i++)//using for loop
    {
        printf("\n%d",rand());//using rand function
    }
}

//WAP to print the random numbers using rand function.
1.program to write random numbers using rand function
2.in main function write  variables.
3.using for loop condition.
4.print the rand function.
.
#include <stdio.h>

int main()
{
    int i;//declaring
    printf("random number are:\n");//print the random number
    for(i=0;i<5;i++)//using for loop
    {
        printf("\n%d",rand()%20);//printing the rand numbers
    }
}
//WAP to print gets using pointers.
#include <stdio.h>


    int *get();
    int *p;// declaring the pointers
    int main()
    {
        p=get();//using gets
        printf("\n%d",p);//print the p values
        printf("\n%d",*p);
    }
    int*get()
    {
        static int a=10;
        return &a;
    }
//WAp to pass pointer as a argument to the function.
1.program to write argument to the function using pointers.
2.declare function with some arguments.
3.in main function write a and n variables.
4.pass the value and address using calling function.
5.define the function coming from calling function.

#include<stdio.h>
float average(int *a,int n);//function declaration
int main()
{
 int a[5]={1,2,3,4,5};//declaring array
int n=5;
float result;
result=average(a,n);//calling function
printf("average value is :%f",result);
}
float average(int*a,int n)
{
 float res;
 float sum=0;
 for(int i=0;i<5;i++)
{
 sum+=a[i];
}
res=sum/n;
return res;
}

//WAP using function to written quotient and remainder passing multiple values using pointers.
algorithm:
1.program to write quotient and remainder using pointers.
2.declare function with some arguments.
3.in main function write a and b variables and pointers variables p and q.
4.pass the value and address using calling function.
5.define the function coming from calling function.

#include<stdio.h>
void result(int x,int y,int*remainder,int*quotient);//function declaration
int main()
{
 int a=20,b=10;//declaring variables
 int *p,*q;//pointer variables
 p=&a;//stores address of a in pointer p
 q=&b;//stores address of b in pointer q
 result(a,b,p,q);//calling function
 printf("%d %d",a,b);
 }
void result(int x,int y,int*remainder,int*quotient)//defining the function
{
*remainder=x%y;//gets remainder and assigning to address of a
*quotient=x/y;//gets quotient and assigning to address of b
}
