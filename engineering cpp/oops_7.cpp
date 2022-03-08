#include<iostream>
#include<string>
using namespace std;
class person
{
private: char *name;
int age;
public:person()
{
name= (char *)"ashtami";
age=18;
}
person(char *nam)
{
name=nam;
age=18;
}
person(char *na,int a)
{
name=na;
age=a;
}
person(person &p) //copy constructor
{
name=p.name;
age=p.age;
}
int print();
};
int person::print()
{
cout<<"name :"<<name<<"\n";
cout<<"age :"<<age<<"\n";
return 0;
}
int main()
{
person s;
cout<<"Inside default constructor\n";
s.print();
char p[90]={"ashi"};
person m(p);
cout<<"Inside parameterised constructor with name as argument\n";
m.print();
person n(p,18);
cout<<"Inside parameterized constructor with name and age argument\n";
n.print();
person g=n;
cout<<"Inside copy constructor\n";
g.print();
return 0;
}