#include <iostream>
#include<string>
using namespace std;

class student
{
private:
    char name[20];
    int age;
public:student()
{
cout<<"Details of the student"<<endl;
    }
    void getdata()
    {
        cout<<" Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
    }
    int print()
    {
        cout<<"the name of the student is"<<" "<<name<<endl;
        cout<<"the age of the student is"<<" "<<age<<endl;
    }

};
int main()
{
    student st;
    st.getdata();
    st.print();
    return 0;
}