#include<iostream>
using namespace std;
class parent{
    public:
    parent(int i){
        int x=i;
        cout<<"parent class "<<x<<endl;

    }
};
class child:public parent{
    public:
    child(int j):parent(j){
        cout<<"child class "<<j<<endl;
    }

    };
    int main(){
        child a(10);
        return 0;
    }