#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"a\n";
    }
    void myfunc(){
        cout<<"parent\n";
        }
        ~A(){
            cout<<"a d\n";
        }
};
class B{
    public:
    B(){
        cout<<"b\n";
    }
    void myotherfunc(){
        cout<<" other parent\n";

    }
    ~B(){
        cout<<"b d\n";
    }
};
class X:public A,public B{
public:
X(){
    cout<<"x c\n";
}
~X(){
    cout<<"x d\n";
}
};
int main(){
    X a;
    a.myfunc();
    a.myotherfunc();

}