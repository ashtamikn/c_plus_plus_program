#include<iostream>
using namespace std;
class vehicle{
    public:
    string bla="bow";
    void honk(){
        cout<<"peeem"<<endl;

    }
};
class car:public vehicle{
    public:
    int no=12;

};
int main(){
    car a;
    a.honk();
    cout<<a.no<<endl<<a.bla<<endl;
    return 0;
}