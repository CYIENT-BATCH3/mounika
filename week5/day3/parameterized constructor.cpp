/WAP to understand the parameterized constructor concept?
#include<iostream>
using namespace std;
class employee_details//class name
{
	string name;//declaring the variables
	int age;
public:
	employee_details(string employee_name,int employee_age)	//parameterized constructor declaration
	{
		cout<<"parameterized constructor:"<<endl;
		name=employee_name;//initializing the arguments
		age=employee_age;
	}
	void display()//display function to print class data members
	{
		cout<<"Name of employee is "<<name<<endl;//printing the name
		cout<<"age of employee is "<<age<<endl;//printing the age
	}

};
int main()
{
	employee_details obj("mounika",22);//instance object in class with parameters
	obj.display();	//calling function to display
}

