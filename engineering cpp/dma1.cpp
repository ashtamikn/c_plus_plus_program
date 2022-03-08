#include<iostream>
using namespace std;
int main(){
     //double x=10.525578;

    double *val;
  //val=&x;
    val=new double;
    *val=343.5;
    

 cout<<"value is "<<*val<<endl;
 delete val;
}