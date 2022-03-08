/*class a
{
	private:intx,y;
	friend class b;//permitting class b to access the private members
	               //or member functions

	friend void b::display();//only display medthod can access the private members of a
};

class b
{
	void display();
};

*/

#include<iostream>
using namespace std;

class A
{
	private:int a;
	public: A()
	{
		a=10;
	}
	friend class B;
};

class B
{
	private:int b;
	public:void displayA(A &x)
	{
		cout<<"A :: a = "<<x.a<<endl;
	}
};

int main()
{
	A a1;
	B b1;

	b1.displayA(a1);
	return 0;
}