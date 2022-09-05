//WAP to enter first name and last name using string and also check output for gets() and scanf().
#include<stdio.h>
int main()
{
    char first_name[7], last_name[6];//declaration string
    printf("enter the first_ name");// print the first name in string
    scanf("%s",first_name);//reading the string
    printf("enter the last_name");//print the last name in string
    scanf("%s",last_name);//reading the string
    printf("%s",first_name);//printing the first name
    printf("%s",last_name);//printing the last name
    return 0;
}
//WAP to print the string with using strcat
#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    char str[20];//declaring str
    char str1[30];//declaring str1
    
    printf("enter string:");//print the string
    scanf("%s",str);//reading the str
    printf("enter string1:");//print the string1
    scanf("%s",str1);//reading the str1
    printf("%s",strcat(str,str1));
}

//WAP to print the string without using strcat
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="good";//declaring string s1
    char s2[]="morning";//declaring string s2
    int i=0,len1,len2; //taking two variables
    len1=strlen(s1);//declaring length1
    len2=strlen(s2);//declaring length2
     for(i=0;i<len2;i++)//using for loop
     {
         s1[len1+i]=s2[i];
     }
     
    printf("%s",s1);//printing the s1
    
    
    
}
WAP to print length of the string



#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],str[60];//declaring string
    int i,length;
    printf("enter the length");//printing the length
    scanf("%s",str);//reading the string
    
    
    
    printf("length of the string %d",strlen(str));//printing the string length

    
    
}

WAP to print first and last name in the given string.
#include <stdio.h>
#include<string.h>
char str[]="welldone";//declare and initialize
char str1[50]="wellodone";
char str2[]={'w','e','l','l','d','o','n','e'};
char str3[14]={'w','e','l','l','d','o','n','e'};// print the string
char fname[6],lname[4];
int main()
{
    scanf("%s",lname);//reading string
    printf("%s\n",fname);
    printf("%s\n",lname);
}


    
    
}

//WAP to print string without using string length
#include <stdio.h>

int main()
{
    char ch[50];//declaration
    int count,i;
    printf("enter the string");//print string
    gets(ch);
    for(i=0;i<ch[i]!='\0';i++)//using for loop
    {
        count++;//increment count
    }
    printf("%d",i);//printing the string
}

alpahbets,count digit,special character:
/*ALGORITHM
s-1:Give the string value and initialize count
s-2:Now with the help of while loop (strlen(st)!='\0'
S-3:Now if str==NULL then count gets increamented
s-4:Now with the help of printf statement print the count value*/

#include <stdio.h>
#include <string.h>

void main()
{
    char str[200];
    int alp,digit,splch,i;
    alp=digit=splch=i=0;
    printf("Enter the string:\n");
    scanf("%[^\n]s", str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

printf("NUMBER OF ALPHABETS IN GIVEN STRING ARE: %d\n",alp);
printf("NUMBER OF DIGITS IN GIVEN STRING ARE: %d\n",digit);
printf("NUMBER OF SPECIAL CHARACTERS IN GIVEN STRING ARE: %d\n",splch);
}

.//print the string:
#include <stdio.h>

   //declare and intialize string
   char str[]="WELLDONE";
   char str1[50]="WELLDONE";
   char str2[]={'W','E','L','L','D','O','N','E','\0'};
   char str3[14]={'W','E','L','L','D','O','N','E','\0'};
   char fname[6],lname[4];
   int main() {
   //print string
   printf("1-%s\n",str);
   printf("2-%s\n",str1);
   printf("3-%s\n",str2);
   printf("4-%s\n",str3);

    return 0;
}

       
