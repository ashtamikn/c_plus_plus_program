#include<iostream>
using namespace std;
class A{
    public:
    int cost;
};
class B:public A{
    public:

    int bla;

};
int main(){
    B b;
    A *iptr=&b;
    iptr->cost=180;
    //iptr->bla=6;up cast /error
    cout<<iptr->cost;
    A a;
    B *bptr=(B *)&a;//type casting
    bptr->cost=10;
    bptr->bla=8;
    cout<<bptr->bla<<endl<<bptr->cost;
    return 0;
}