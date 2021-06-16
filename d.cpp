#include<iostream>
using namespace std;
class Employees
{

    public:/* data name designation salary branch */
   char name[20];
   float salary;
   char designation[30];
   char branch[20];



public:
void get_employee_data();
void put_employee_data();
};

void Employees::get_employee_data()
{
    cout<<"enter name:\n";
    cin>>name;
    cout<<"enter designation"<<endl;
    cin>>designation;
    cout<<"enter branch"<<endl;
    cin>>branch;
    cout<<"enter salary"<<endl;
    cin>>salary;
}


void Employees::put_employee_data()
{
    cout<<"name of employee:"<<name<<endl;
    cout<<name<<"'s designation:"<<designation<<endl;
    cout<<name<<"'s salary:"<<salary<<endl;
    cout<<name<<"'s branch:"<<branch<<endl;
}
int main()
{
    Employees emp[5];
    int i,num,j;
    cout<<"\nenter no of employees\n";
    cin>>num;
    for(i=0;i<num;i++)
    emp[i].get_employee_data();
    for(i=0;i<num;i++)
    emp[i].put_employee_data();

    
    cout<<"enter which empoys data you want to know"<<endl;
    cin>>j;
    emp[j].put_employee_data();
    return 0;
}

