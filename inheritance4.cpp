//multilevel
#include<iostream>
using namespace std;
class A{
    public:
    void myfunc(){
        cout<<"parent";
        }
};
class B:public A{
    public:
    void myotherfunc(){
        cout<<" other parent";

    }
};
class C:public B{
    public:
    void thirdfunc(){
        cout<<"inside c\n";
    }

};
int main(){
    C a;
    a.thirdfunc();
    a.myfunc();
    a.myotherfunc();

}