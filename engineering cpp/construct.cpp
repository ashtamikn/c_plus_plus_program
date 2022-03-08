#include<iostream>
using namespace std;
class Demo{
    public:
    int x,y;
    Demo(){
x=10;
y=20;
    }
    
};
int main(){
    Demo d;
    cout<<d.x;
    cout<<d.y;
    return 0;

}