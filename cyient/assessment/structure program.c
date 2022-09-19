//WAP to create a structure:student database (i.e. stud_id,stud_name,stud_age
ALGORITHM:
progarm to get 5 student data at a time using structures.
declare structure and inside structure declare some variables.
then in main function using array concept to get 5 student data.
take for loop for iteration to print one by one data.
print all the 5 student data.
stop.
#include<stdio.h>
struct student_database{//structure declaration
	int student_id;//declaring the variable
	char student_name[30];
		int student_age;
};
int main(){
	struct student_database s1[5];//defining the array of structure
	int i;
	printf("enter data\n");
	for(i=0;i<5;i++){//loop for
	    printf("enter the id:");
	scanf("%d",&e1[i].student_id);//reading student id
	 printf("enter the name:");
	scanf("%s",&e1[i].student_name);//reading student name
	 printf("enter the age:");
	scanf("%f",&e1[i].student_age);//reading student age
	}
	for(i=0;i<5;i++)
	printf("ID-%d\tNAME-%s\tSALARY-%f\t\n",s1[i].student_id,s1[i].student_name,s1[i].student_age);
}
