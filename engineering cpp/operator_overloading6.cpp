//new and delete operators overloading
#include <iostream>
#include<cstdlib>
#include<stdexcept>
using namespace std;
class student{
    string name;
    int age;
    public:
    student(){
        name="noname";
        age=0;
    }
    student(string name,int age){
        this->name=name;
        this->age=age;
    }
    void whoareyou(){
        cout<<" hi i am "<<name<<" my age is "<<age<<endl;
    }
    void *operator new(size_t size){
        void *pointer;
        cout<<"overloaded new .size is "<<size<<endl;
        pointer=malloc(size);
        if(!pointer){
            bad_alloc ba;
            throw ba;
        }
        return pointer;
    }void operator delete(void *pointer){
        cout<<"overloaded delete\n";
        free(pointer);
    }
    
};
int main(){
    student *meptr;
    try{
        meptr=new student("ashi",19);
        meptr->whoareyou();

    }
    catch(bad_alloc b){
        cout<<b.what()<<endl;
    }
    return 0;
}