
#include<iostream>
using namespace std;
class A{
    public:
   virtual void func(){
        cout<<"parent func\n";
        }
        A(){
        cout<<"base constructor\n";
        }
   virtual ~A(){cout<<"base destructor\n";}
};
class B:public A{
    public:
   void func(){
        cout<<"b func\n";
        }
        B(){
        cout<<"b constructor\n";
        }
    ~B(){cout<<"b destructor\n";}
};

int main(){
    A *a=new A();
    A *b=new B();
    a->func();
    b->func();
    delete a;
    delete b;
    return 1;
}