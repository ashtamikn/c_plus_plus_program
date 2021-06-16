#include<iostream>
using namespace std;
class Base{
    int x;
    public:virtual void f()=0;//no implemetation of func so pure virtual
    int getx(){
        return x;
    }
};
class derived:public Base{
    int y;
    public:
    void f()
    {
        cout<<"func called";
    }
};
class A{//abstract class
int x;
    public:virtual void display()=0;//pure virtual function
int getdata()
{
    return x;
}
};
int main()

{
    Base *ptr;
    derived d;
    ptr=&d;
    ptr->f();
    ptr->getx();
    d.f();

    return 0;
    
}