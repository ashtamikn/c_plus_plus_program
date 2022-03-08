#include<iostream>
using namespace std;
class person
{
protected:
 char name[40];
public:
 void getname()
 {
 cout<<"Enter name:";
 cin>>name;
 }
 void disp()
 {
cout<<"Name is:"<<name<<endl;
 }
 virtual void getdata()=0;
 virtual bool outstanding()=0;
};
class student:public person
{
float gpa;
public:
 void getdata()
 {
 person::getname();
 cout<<"Enter student's GPA:";
 cin>>gpa;
 }
 bool outstanding()
 {
 return(gpa>3.5) ? true:false;
 }
};
class professor:public person
{
 int numpubs;
public:
 void getdata()
 {
 person::getname();
 cout<<"enter number of professor's publication:";
 cin>>numpubs;
 }
 bool outstanding()
 {
 return(numpubs>100) ? true:false;
 }
};
int main()
{
 person *perptr[10];
 int n=0;
 char choice;
 do
 {
 cout<<" Enter student or professor(s/p):";
 cin>>choice;
 if(choice=='s')
 perptr[n]=new student;
 else
 perptr[n]=new professor;
 perptr[n++]->getdata();
 cout<<"enter another(y/n)?";
 cin>>choice;
 }while (choice=='y');
 for(int j=0;j<n;j++)
 {
 perptr[j]->disp();
 if(perptr[j]->outstanding())
 cout<<"this person is outstanding\n";
 }
}