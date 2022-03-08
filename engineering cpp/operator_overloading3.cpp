//arithmetic  operators overloading
#include <iostream>
using namespace std;
class Integer{
    int n;
    public:
    void read(){
        cout<<"enter a no\n";
        cin>>n;
    }
    void print(){
        cout<<"value is "<<n<<endl;
    }
    Integer operator +(Integer x){
        Integer temp;
        temp.n=n+x.n;
        return temp;
    }
    Integer operator -(Integer x){
        Integer temp;
        temp.n=n-x.n;
        return temp;
    }
    Integer operator *(Integer x){
        Integer temp;
        temp.n=n*x.n;
        return temp;
    }
    Integer operator /(Integer x){
        Integer temp;
        temp.n=n/x.n;
        return temp;
    }
};
int main(){
    Integer i1;
    Integer i2;
    Integer i3;
    i1.read();
    i2.read();
    i3=i1+i2;
    i3.print();
    i3=i1-i2;
     i3.print();
     i3=i1*i2;
    i3.print();
    i3=i1/i2;
    i3.print();
}