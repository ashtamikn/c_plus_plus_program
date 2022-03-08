#include<iostream>
using namespace std;
class deposit 
{
 float p,r,t,i;
public:
float interest()
{
cout << "Enter the principal, rate & time : " << endl;
cin>>p>>r>>t;
i=(p*r*t)/100;
return i;
}
void print()
 {
cout << "Principal = Rs" << p << endl;
cout << "Rate = " << r << "%" << endl;
cout << "Time = " << t << " years" << endl;
cout << "Simple Interest = Rs" << i << endl;
}
 };
main()
{
 deposit d;
 d.interest();
 d.print();
}