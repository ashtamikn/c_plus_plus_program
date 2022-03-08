#include<iostream>
using namespace std;
class Animal{
    public:
   virtual void eat(){
        cout<<"ANIMAL EATING\n";
    }
};
class cat:public Animal{
    public:
    void eat(){
        cout<<"cat eating\n";
    }
};
class dog:public Animal{
    public:
    void eat(){
        cout<<"dog eating\n";
    }
};
void function(Animal *xyz){
    xyz->eat();
};
int main(){
    Animal *ptr;
    cat cobj;
    dog dobj;
    ptr=&cobj;
    function(ptr);
    ptr=&dobj;
    function(ptr);
}