//WAP to get details of employee in c++?(functions written outside the class)
#include<iostream>
using namespace std;
class employee_details//class declaration with myclass as class name
{
	char employee_name[10];
	int employee_salary;
public:	//public access specifier
	void input();//function declaration
	void display();//function declaration
};
void employee_details::input()
	{
		cout<<"enter the name:"<<endl;
		cin>>employee_name;//reading the variable from user
		cout<<"enter the salary:"<<endl;
		cin>>employee_salary;//reading the variable
	}
void employee_details::display()
	{
	    cout<<"name is:"<<employee_name<<"\n"; //prints the employee name
	    cout<<"salary is:"<<employee_salary;//prints the employee age
	}
int main()
{
	employee_details e1;//declare the object
	e1.input();//calling function for input and display
	e1.display();
}

