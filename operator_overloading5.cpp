//insertion and extraction operators overloading
#include <iostream>
using namespace std;
class Person{
    int age;
    string name;
    public:
    Person(){
        name="noname";
        age=0;

    }
    friend ostream &operator<<(ostream &output,Person &p); 
    friend istream &operator>>(istream &input,Person &p);
};
ostream &operator<<(ostream &output,Person &p) {
output<<"what the heck"<<endl;
output<<"my name is "<<p.name<<" and my age is "<<p.age<<endl;
return output;
}
istream &operator>>(istream &input,Person &p){
    input>>p.name>>p.age;
    return input;
}
int main(){
    cout<<"enter name and age "<<endl;
    Person me;
    cin>>me;
    cout<<me;
    return 0;
}