
//WAP to print employee detials using structure.
#include <stdio.h>

struct employee //struct detials
{
    int emp_id;//declaration
    char name[20];
    
};
int main()
{
    
    struct employee s1[10];//struct employee detials
   // printf("how many employee");
    //scanf("%d",&n);
    
    for( int i=0;i<10;i++)
    {
        printf("\nEnter employee id:" );
    scanf("%d",&s1[i].emp_id);
    printf("enter the employee name:");
    scanf("%s",s1[i].name);
    }
    for(int i=0;i<10;i++)
    {
    printf("id is :%d\n",s1[i].emp_id);
    printf("name is :%s\n",s1[i].name);
    }
    
    return 0;
}