//WAP to understand the copy constructor concept?

#include<iostream>
using namespace std;
class car//class name
{
	string colour;//declaring the variables
	string shape;
public:
	car(string car_colour,string car_shape)//parameterized constructor declaration
	{
		cout<<"parameterized constructor:"<<endl;
		colour=car_colour;			//initializing the arguments
		shape=car_shape;
	}
	car(car& obj)//copy constructor
	{
	  cout<<"copy constructor:"<<endl;
	  colour=obj.colour;
	  //shape=obj.shape;
	}
	void display()//display function to print class data members
	{
		cout<<"colour is "<<colour<<endl;//printing the colour
	}
};
int main()
{
	car obj1("black","square");//instance object in class with parameters
	obj1.display();		//calling function to display
	car obj2(obj1);		//coping the first object to object 2
	obj2.display();
}
