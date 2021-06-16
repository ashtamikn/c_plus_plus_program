// C++ program to show the order of constructor call 
// in single inheritance 
   
#include <iostream> 
using namespace std; 
  
// base class 
class Parent 
{ 
    public: 
      
    // base class constructor 
    Parent() 
    { 
        cout << "Inside base class" << endl; 
    } 
    ~Parent()
    {
        cout<<"base class destructor"<<endl;
    }
}; 
  
// sub class 
class Child : public Parent 
{ 
    public: 
      
    //sub class constructor 
    Child() 
    { 
        cout << "Inside derived class" << endl; 
    } 
    ~Child()
    {
        cout<<"derived class destructor\n";
    }
}; 
  
// main function 
int main() { 
       
    // creating object of sub class 
    Child obj; 
      
    return 0; 
}  