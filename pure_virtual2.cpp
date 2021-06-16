#include<iostream>
using namespace std;
class shape{
 virtual void getarea()=0;
};
class circle:public shape{
    public:
    void getarea(){
        cout<<"enter r\n";
        int r;
        cin>>r;
        cout<<"area is="<<(3.14*r*r);
    }
};
class rectangle:public shape{
public:
void getarea(){
    cout<<"enter l and b\n";
    int l,b;
    cin>>l>>b;
    cout<<"area of rectangle "<<(l*b);

}

};
int main(){
    //shape a;
    circle c;
    c.getarea();
    rectangle r1;
    r1.getarea();
}