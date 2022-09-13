//WAP to print call by reference.
#include<stdio.h>
#include<string.h>
struct student//declaring function
{
	int id;
	char name[20];
	float percent;
};
void func(struct student *rec);//call by reference
int main()
{
	struct student record;
	record.id=1;
	strcpy(record.name,"mouni");
	record.percent=79.5;
	fun(&record);
	return 0;
}
void func(struct student *rec)//function definition
{
	printf("Id is:%d\n",rec->id);
	printf("Name is:%s\n",rec->name);
	printf("Percent:%f\n",rec->percent);
}