//WAP to understand the array concept in c++(functions written inside the class)
#include<iostream>
using namespace std;
class myclass//class declaration with myclass as class name
{
	int output;
public:	//public access specifier
	void input(int num)//defination of function
	{
		output=num;								
	}
	void display()//defination of function
	{
		cout<<"i am=:"<<output;
	}
};
int main()
{
	myclass object[10];//class object
	for(int i=0;i<10;i++)object[i].input(i);//calling function for input and display
	for(int i=0;i<10;i++)object[i].display();
}