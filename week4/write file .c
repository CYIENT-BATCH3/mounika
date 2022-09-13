//WAP to write files in write mode using file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *filename;//declare a file pointer
	char mysentence[100];//declaring the character variable
	int number;
	filename=fopen("d://file2.txt","w");//syntax for write
    if(filename==NULL)
    {
    	printf("error!");
    	exit(1);
    }
    scanf("%[^\n]s",mysentence);
	number=68907543;
	printf("mouni");
	fprintf(filename,"%s",mysentence);
	fclose(filename);



}
