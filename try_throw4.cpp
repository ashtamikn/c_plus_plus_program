#include<iostream>
using namespace std;
class Test1{
    public:
    int marks;
    void getdata(){
        cout<<"enter 1st test marks\n";
        cin>>marks;
    } 
    void smtg(){
       try{

        if(marks<10){
            throw(marks);
        }
    
    }
    catch (int a){
        cout<<"get good marks\n";
    }
    }
};
class Test2{
public:
    int marks;
    void getdata(){
        cout<<"enter 2nd test marks\n";
        cin>>marks;
    } 
    void smtg(){
       try{

        if(marks<10){
            throw(marks);
        }
    
    }
    catch (int a){
        cout<<"get good marks\n";
    }
    }
};
int main()
{
// for(int i=1;i<=2;i++){

// try{
//    if(i==1)
//        throw Test1();
//    else if(i==2)
//      throw Test2();
// }
//    catch(Test1 ob1)
//    {
//        cout<<" test1 exception\n";
//    }
//    catch(Test2 ob2){
//     cout<<"test 2 exception\n";
//    }
// }
Test1 o1;
o1.getdata();
o1.smtg();

Test2 o2;
o2.getdata();
o2.smtg();
   return 0;
}
