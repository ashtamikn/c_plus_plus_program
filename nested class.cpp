#include<iostream>
using namespace std;
class A
{
    public:
    class B
    {
    private:
 int num;
 public:
 void getdata(int n){
num=n;    

    }
    void putdata(){
        cout<<"the no is "<<num<<endl;

    }
    };
};
 // namespace std;
int main(){
    cout<<"Nested class in cpp"<<endl;
    A::B obj;
    obj.getdata(9);
    obj.putdata();
    return 0;
}