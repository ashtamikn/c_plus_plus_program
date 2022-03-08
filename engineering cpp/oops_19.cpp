#include<iostream> 

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
using namespace std;
class Employee 
{ 
 char name[25]; 
 int e_no; 
 public:
Employee() 
 { 
 strcpy(name, " "); 
 e_no=0; 
 } 
 void getdata() 
 { 
 cout<<endl<<"Name of Employee:-> "; 
 cin>>name; 
 cout<<endl<<"Employee Number:-> "; 
 cin>>e_no; 
 } 
 void salary() 
 { 
 cout<<endl<<e_no<<'\t'<<name; 
 } 
 ~Employee() 
 { 
 } 
}; 
class Regular : public Employee 
{ 
 float Basic; 
 public: 
 Regular(float bs) 
 { 
 Basic=bs; 
 } 
 void getdata() 
 { 
 Employee::getdata(); 
 } 
 void salary() 
 { 
 //call Base showdata(); 
 Employee::salary(); 
 cout<<endl<<"Basic = "<<Basic; 
 cout<<endl<<"DA = "<<Basic*0.1; 
 cout<<endl<<"HRA = "<<Basic*0.3; 
 cout<<endl<<"Total Payble = "<<(Basic + (Basic*0.1) + (Basic*0.3)); 
 }
~Regular() 
 { 
 } 
}; 
class Adhoc : public Employee 
{ 
 float wage; 
 int number; 
 public: 
 Adhoc(float wg) 
 { 
 wage=wg; 
 number=0; 
 } 
 void days(int n) 
 { 
 number+=n; 
 } 
 void salary() 
 { 
 //call Base class Showdata 
 Employee::salary(); 
 cout<<endl<<"Total Payble = "<<wage*number<<endl; 
 } 
 void getdata() 
 { 
 Employee::getdata(); 
 } 
 ~Adhoc() 
 { 
 } 
}; 
int main() 
{ 
 class Regular robj(7000); 
 class Adhoc aobj(65); 
 robj.getdata(); 
 aobj.getdata(); 
 aobj.days(25); 
 cout<<endl<<"Details of Regular Employee1\n"; 
 robj.salary(); 
 cout<<endl<<"Details of Adhoc Employee1\n"; 
 aobj.salary(); 
 return 0; 
}