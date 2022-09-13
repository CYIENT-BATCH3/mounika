//WAP to read the file till we find the special character(*,/,$).

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;//declare a file pointer
	char ch;//declaring character variable
	fp=fopen("d://file1.txt","r");//syntax for fopen
	if(fp==NULL)//checking condition
	{
		printf("file is not found");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		printf("%c",ch);
		if(ch=='*')
			break;
	}
	fclose(fp);
}
