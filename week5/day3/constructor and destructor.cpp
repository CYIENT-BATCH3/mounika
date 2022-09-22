//WAP to understand the default constructor and destructor concept?
ALGORITHM:
 1.start
 2.program to understand the default constructor and destructor concept
 3. declare the class name as employee_details
 4. inside the class access public specifier
 5. in that public declare the constructor
 6. in constructor initialize the name and age
 7.using display function print the name and age
 8. after printing free the memory using destructor
 9. stop
 
#include<iostream>
using namespace std;
class employee_details//class name
{
	string employee_name;//declaring the variables
	int employee_age;
public:
	employee_details()//constructor declaration
	{
		cout<<"default constructor:"<<endl;
		employee_name="mounika";
		employee_age=22;
	}
	void display()//display function to print class data members
	{
		cout<<"Name of employee is "<<employee_name<<endl;
		cout<<"age of employee is "<<employee_age<<endl;
	}
	~employee_details()//destructor declaration
	{
		cout<<"Freeing the memory"<<endl;
		employee_name="mounika";
		employee_age=22;
	}
};
int main()
{
	employee_details obj;//creating object in class
	obj.display();//calling function to display
}
