#include<iostream>
using namespace std;
class A{
    public:
    void disp(){
        cout<<"parent class \n";
    }
};
class B:public A{
    public:
    void disp(){
        cout<<" child class \n";
    A::disp();
    }
};
int main(){
    B b;
    b.disp();
    A a=B();
    a.disp();
    
    return 0;
}