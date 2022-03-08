#include<iostream>
using namespace std;
int main()
{
    int *val;
    val=new int[40];
for(int i=0;i<5;i++)
cin>>val[i];
for(int i=0;i<5;i++)
cout<<val[i];
delete[] val;
}