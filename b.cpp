#include<iostream>
#include<string>
using namespace std;
class Student{
public:
int rollNo;
string stdName;
float perc;
public:
void setValue()
{ 
rollNo=0;
stdName="None";
perc=0.0f;
}
void printValue()
{
cout<<"student roll no:"<<rollNo<<endl;
cout<<"name"<<stdName<<endl;
cout<<"percentage:"<<perc<<endl;
}
};
int main()
{
Student std;
std.setValue();
std.printValue();
return 0;
}
