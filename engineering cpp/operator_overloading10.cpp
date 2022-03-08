//assignment operator overloading
#include <iostream>
using namespace std;
class Assign{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<"enter x and y\n";
        cin>>x>>y;
    }
    void operator =(Assign obj){
        x=obj.x;
        y=obj.y;

    }
    void display(){
        cout<<"value of x "<<x<<endl;
        cout<<"value of y "<<y<<endl;
    }
};
int main(){
    Assign obj1,obj2;
    obj1.getdata();
    obj1.display();
    obj2=obj1;
    cout<<"after assigning values of obj 1 to obj2 \n";
    obj2.display();
    return 0;
}