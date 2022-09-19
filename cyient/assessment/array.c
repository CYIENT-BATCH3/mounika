Write a program to print an array and search a number from the given array.If the number is found print it in cansole.

Algorithm:
start
declare an array of elements
enter the number to search in the given array of elements
search for the number in the given array list.
if the number is found print it.
if number is not found print the number not found.
stop

code:

#include<stdio.h>   //header file
int cnt;
void search(int *,int );   //function with arguments and without return value
int main()   //main function
{
	setbuf(stdout,NULL);
	int elements[10]={10,20,30,40,50,60,70,80,90,100};   //declare array of elements
	int num;
	printf("the given elements are ");
	for(int i=0;i<10;i++)
	{
	printf("%d ",elements[i]);  //print the given elements
	}
	printf("\nenter the number to search in the given numbers:");  //enter the number to search
	scanf("%d",&num);
	search(elements,num);  //function calling
	return 0;
}
//function definition
void search(int *ptr,int num)
{
	 cnt=0;
	for(int i=0;i<10;i++)
	{
		if(num==ptr[i])
		{
			printf("%d the num is found at %d position",ptr[i],i);  //if the number is found  print the number with array index 
			cnt++;   //count increment
		}
		if(cnt==0 && i==9)
			{
			printf("%d does not exist",num);  //if number not found print file does not exist.
			}

	}


}
