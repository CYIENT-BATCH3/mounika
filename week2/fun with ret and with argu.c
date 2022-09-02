//function with return and with arguments
#include <stdio.h>
#define pi 3.15 //global declaration
float sum(float,float);//global variable

int main() 
    {
        float x,y,z;//declaration function
        printf("enter any 2 values");//printing the values
        scanf("%f%f",&x,&y);//store the function
        z=sum(x,y);//sum the variables
        printf("\noutput from sum %f",z);//print the sum
    }
    float sum(float a,float b)
    {
    
        printf("sum is:%f",a+b);//printing the sum
        return(a+b);
    }