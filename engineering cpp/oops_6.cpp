#include<iostream>
using namespace std;
class Distance
{
public:
double feet,inch;
};
void max(Distance a,Distance b)
{
double d1,d2;
d1=a.feet*12+a.inch;
d2=b.feet*12+b.inch;
cout<<"The larger distance is:"<<endl;
if(d1>d2)
cout<<a.feet<<"feet"<<a.inch<<"inch"<<endl;
else
cout<<b.feet<<"feet"<<b.inch<<"inch"<<endl;
}
int main()
{
Distance obj1,obj2;
cout<<"enter distances in feet and inches:"<<endl;
cout<<"enter feet of first object:";
cin>>obj1.feet;
cout<<"enter inches:";
cin>>obj1.inch;
cout<<"enter feet of second object:";
cin>>obj2.feet;
cout<<"enter inches:";
cin>>obj2.inch;
cout<<endl;
max(obj1,obj2);
return 0;
}