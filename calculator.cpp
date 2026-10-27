#include <iostream>
using namespace std;

//creating base class
class Calculator
{
	public:
	int n1=5;
	int n2=7;

	int add()
	{
	return n1+n2;
	}

};

//creating base class
class Calculation : public Calculator
{
	public:
	int subtract()
	{
	return n1-n2;
	}

};

//creating object
int main()
{
Calculation c;
c.add();
c.subtract();

cout<<"Addition of the two numbers is: "<<c.add()<<endl;
cout<<"Subtraction of the two numbers is: "<<c.subtract()<<endl;
return 0;
}
