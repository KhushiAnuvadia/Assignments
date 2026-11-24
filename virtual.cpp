#include <iostream>
using namespace std;

class Animal
{
	public:
	virtual void sound()
	{
		cout<<"animal makes sound"<<endl;
	}
};

class cat : public Animal
{
	public:
	void sound() override
	{
		cout<<"cat meows"<<endl;
	}
};

int main()
{
	Animal *ptr;
	cat c;

	ptr=&c;
	ptr->sound();

return 0;
}
