#include<iostream>
using namespace std;
class pdistance{
   private:
    int meters;
    public:
    pdistance(){
        meters=0;
    }
    void display(){
        cout<<"meters value\n"<<meters;
    }
    friend void addvalue(pdistance &d);
};
void addvalue(pdistance &d){
    d.meters=d.meters+5;
}
int main(){
    pdistance d1;
    d1.display();
    addvalue(d1);
    d1.display();
    return 0;
}