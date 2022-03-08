#include<iostream>
using namespace std;
class Base{
    public:
  void show(){
        cout<<"base class show function\n";
    }
    virtual void print(){
        cout<<"base class print func\n";
    }
};
class derived:public Base{
    void show(){
        cout<<"derived class show function\n";
    }
    void print(){
        cout<<"derived class print function\n";
    }
};
int main(){
    Base *bptr;
    derived dobj;
    bptr=&dobj;
    //run time polymorphism
    bptr->show();
        bptr->print();

}