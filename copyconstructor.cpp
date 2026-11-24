#include <iostream>
using namespace std;

class Class
{
	public:
	string student;

	Class()
	{
		cout<<"students";
	}

	student(Class&s)
	{
	student=s.student;
	}

	void display()
	{
	cout<<"student: "<<student<<std::endl;
	}
};

int main()
{
	Class s1(90);
	student s2(s1);

	s1.display();
	s2.display();
return 0;
}
