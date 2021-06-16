//increment decrement operator overloading
#include <iostream>
using namespace std;
class Weight{
    private:
    int kg;
    public:
    Weight(){
        kg=0;
    }
    Weight(int x)
{
    kg=x;
}   
 void printWeight(){
        cout<<"weight in kg "<<kg<<endl;
    }
    Weight operator ++(){
       Weight temp;
       temp.kg=++kg;
       return temp;
    }
    Weight operator ++(int){//int in bracket is to differentiate prefix and postfix
       return kg++;
    }
    void operator --(){
        --kg;
    }
    void operator --(int){
        kg--;
    }

};
int main(){
   Weight obj;
   obj.printWeight();
   ++obj;
   obj.printWeight();
    obj++;
    obj.printWeight();
    --obj;
    obj.printWeight();
    obj--;
    obj.printWeight();
    Weight obj1,obj2;
    obj2=++obj1;
    obj2.printWeight();
    ++obj2;
    obj2.printWeight();
    return 0;
}