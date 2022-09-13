//WAP  to read files in read mode using file.
#include<stdio.h>
#include<stdlib.h>
int main()
{

	FILE *fp=NULL;//declare a file pointer
	char ch;//declaring character variable
	//the program will exit in case the file pointer fp returns
	fp=fopen("d://filepath.txt","r");//syntax for fopen
	if (fp==NULL)//check condition
	{
		printf("file is not found");
		exit(1);
	}
	while(1)
		{
		ch=fgetc(fp);
		printf("%c",ch);
		if(ch==EOF)
			break;
		}
   fclose(fp);
}


