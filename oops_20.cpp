#include<iostream>

using namespace std;
class fract
{
 int num;
int den;
 public:
fract(int a);
 fract(int a,int b);
 fract(fract &);
 float eval_fract();
 void invert();
 void display();
};
fract::fract(int a)
{
 num=den=a;
}
fract :: fract(int a,int b)
{
 num=a;
 den=b;
}
fract :: fract(fract &f)
{
 cout<<"copy constructor called\n";
 num=f.num;
 den=f.den;
}
float fract :: eval_fract()
{
 float res;
 res=(float)num/den;
 return res;
}
void fract ::invert()
{
 int t=num;
 num=den;
 den=t;
}
void fract ::display()
{
 cout<<num<<"/"<<den<<endl;
}
 main()
{
 fract f1(2);
 f1.display();
 cout<<"\n";
 fract f3(2,3);
 fract f2=f3;
 float f=f2.eval_fract();
 cout<<"The value of fraction is:"<<f<<"\n";
 f2.invert();
 f2.display();
 
}
