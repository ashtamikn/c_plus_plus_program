//
#include<iostream>
using namespace std;
class A{
    public:
    void fooA(){
        cout<<"class A \n";

    }

};
class B:public A{
    public:
    void fooB(){
        cout<<" class b \n";

    }
};
class X:public A{
    public:
    void fooX(){
        cout<<" class X \n";

    }
};
class D:public X{
    public:
    void fooD(){
        cout<<"class D\n";

    }
};
class E:public B{
    public:
    void fooE(){
        cout<<" class E \n";

    }
};
int main(){
    E e;
    D d;
    d.fooA();
    d.fooX();
    e.fooA();
    e.fooB();
    return 0;
}