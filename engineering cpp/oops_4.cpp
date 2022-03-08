#include<iostream>
using namespace std;
class A
{
public:
char name[20];

char sex[10];
int age;
void get_data();
void disp_data();
};
void A::get_data()
{
cout<<"enter name:";
cin>>name;
cout<<"enter age:";
cin>>age;
cout<<"enter sex:";
cin>>sex;
}
void A::disp_data()
{
cout<<"name:"<<name<<'\n';
cout<<"age:"<<age<<'\n';
cout<<"sex:"<<sex<<'\n';
}
class B
{
public:

int bed_number;
char nature_illness[40];
void get_data();
void disp_data();
};
void B::get_data()
{
cout<<"enter bed number:";
cin>>bed_number;
cout<<"enter nature of illness:";
cin>>nature_illness;
}
void B::disp_data()
{
cout<<"bed number:"<<bed_number<<'\n';
cout<<"nature of illness:"<<nature_illness<<'\n';
}
class C:public A,public B
{
int date_admission;
public:
void get_data();
void disp_data();

void record();
};
void C::get_data()
{
A::get_data();
B::get_data();
cout<<"Enter Date of Admission:-> ";
cin>>date_admission;
}
void C::disp_data()
{
A::disp_data();
B::disp_data();
cout<<"Date of Admission :"<<date_admission<<endl;
}
int main()
{

C c1;
cout<<endl<<"Enter details to add a new record\n";

c1.get_data();

cout<<endl<<"Displaying the added record to database\n";
c1.disp_data();
return 0;
}
