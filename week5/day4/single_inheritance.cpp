#include <iostream>
using namespace std;
class father        //base class
{
    public:
    int age;        //variable of base class
};
class son : public father   //child class
{
    public:
    void display()  //function in child class
    {
        age=22;
        cout<<"age is :"<<age<<endl;
    }
};
int main() 
{
   son s1;          //object for child class
   s1.display();    //calling function in child class
   return 0;
}
