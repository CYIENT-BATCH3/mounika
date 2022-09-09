/WAP to access a number of structure use dot operator
#include <stdio.h>

struct employee //struct detials
{
    int emp_id;//declaration
    char name[20];
    float salary;
};
int main()
{
    struct employee s1;//struct employee detials
    scanf("%d",&s1.emp_id);
    printf("id is :%d\n",s1.emp_id);
    scanf("%s",&s1.name);
    printf("name is :%s\n",s1.name);
    scanf("%f",&s1.salary);
    printf("salary is :%f\n",s1.salary);
    return 0;
}
