//WAP using struct as return type in pass by value?

#include<stdio.h>
#include<string.h>
struct employee
{
	int employee_id;
	char employee_name[30];
}s;
struct employee details(struct employee s);//function declaration
int main()
{
	struct employee s,ptr;//structure variable
	ptr=details(s);//calling function 
	printf("ID:%d\nNAME:%s",ptr.employee_id,ptr.employee_name);
}
struct employee details(struct employee s)
{
	s.employee_id=69909;//initialising the integer value
        strcpy(s.employee_name,"mouni");//strcpy to get string 
	return s;
}
