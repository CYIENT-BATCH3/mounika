// WAP to get student details using structure of functions
#include<stdio.h>
struct student{   //structure declaration
	int age;
	char name[10];
};
void details(struct student record);//function declaration
int main()
{
	setbuf(stdout,NULL);
struct student record;//structure variable
printf("enter the age");
scanf("%d",&record.age);//reading integer variable
printf("enter the name\n");
scanf("%s",record.name);//reading character variable
details(record); //calling function

}
void details(struct student record)//defining function
{
	printf("age of student is %d\n",record.age);//print the age of student
	printf("name of the student is %s",record.name);//print the name of student
}