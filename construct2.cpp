#include<iostream>
using namespace std;
class AA{
    public:
    string name;
    int age;
    AA(string x,int y){
        name=x;
        age=y;

    }
    ~AA(){
        cout<<"inside destructor";
    }
};
int main(){
    AA a("ashi",19);
    AA b("bla",17);
    cout<<a.name<<endl<<a.age<<endl<<b.age<<endl<<b.name<<endl;
    return 0;

}