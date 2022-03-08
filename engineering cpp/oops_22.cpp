
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
   friend void sort(student *s1, int N);
};
void sort(student *s1, int N)
{
 student temp;
 for(int i=0;i<N-1;i++)
 for(int j=N-1;j>i;j--)
 {
 if (s1[j].age < s1[j-1].age)
 { temp=s1[j];
 s1[j]=s1[j-1];
 s1[j-1]=temp;
 }
 }
 cout<<"\n Sorted Data is:\n";
 for(int i=0;i<N;i++)
 s1[i].print();
}
int main()
{
    student obj[10];
    int N,i,j;
    cout<<endl<<"Enter maximum number of records u want to enter:-> "; 
     cin>>N; 
      for (i=0;i<N;i++) 
    {
    obj[i].getdata();
    }
     cout<<endl<<"U have entered following records:";
      for (i=0;i<N;i++){
          obj[i].print(); 
      }
      sort(obj,N); 
    return 0;
}
