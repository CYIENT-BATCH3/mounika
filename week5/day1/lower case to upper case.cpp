//WRITE A C++ PROGRAM TO READ A STRING .CONVERT UPPER CASE TO LOWER CASE AND LOWER CASE TO UPPER CASE
#include <iostream>
using namespace std;
int main()
{
	string str;
    cout<<"Enter the string ";
    getline(cin,str);
	for(int i=0;str[i]!='\0';i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')  //checking for lowercase characters
				str[i] = str[i] - 32;        //converting lowercase to uppercase
		}
		cout<<"\n The string in upper case: "<< str;
		for(int i=0;str[i]!='\0';i++)
			{
				if (str[i] >= 'A' && str[i] <= 'Z') //checking for uppercase characters
					str[i] = str[i] + 32; //converting uppercase to lowercase
			}
	cout<<"\n The string in lower case: "<< str;
         return 0;
}