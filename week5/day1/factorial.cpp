//WAP IN  C++  TO PRINT FACTORIAL OF A NUMBER USING FOR LOOP
#include<iostream>
using namespace std;    //scope resolution
int main()
{
//declaring variables
	double a,fact=1;
	int i;
	cout<<"ENTER THE NUMBER\n";    //asking to enter number
	cin>>a;      //reading from the keyboard
	for(i=1;i<=a;i++)
	{
		fact=fact*i;    //condition for factorial
	}
	cout<<"factorial of a number is:"<<fact;   //printing factorial
	}