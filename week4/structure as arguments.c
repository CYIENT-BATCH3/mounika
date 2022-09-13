#include <stdio.h>
struct student
{
    char name[50];
    int age;
};
//function prototype
void display(struct student s);
int main()
{
	setbuf(stdout,NULL);
    struct student s1;
    printf("Enter name:");
    //read string input from the user until \n is entered
    scanf("%[^\n]%*c",s1.name);
    printf("enter age:");
    scanf("%d",&s1.age);
    display(s1);
    return 0;
}
void display(struct student s)
{
	printf("age is %d\n" ,s.age);
	printf("name is %s\n",s.name);
}
