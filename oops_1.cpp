# include <iostream>

using namespace std;

class complex 
{ 
 float real, imag;
 public:
 complex()
{
 real=imag=0;
 }
 void getdata()
 {
 cout<<"insert real Part";
 cin>>real;
 cout<<"insert Imaginary Part";
 cin>>imag;
 }
 void display()
 {

 cout<<real<<"+"<<imag<<"i"<<endl;
 }

complex operator+(complex c2)
 {
 complex temp;
 temp.real=real+c2.real;
 temp.imag=imag+c2.imag;
 return(temp);
 }
 };
 
int main()
 {
 
 complex c1,c2,c3;
 cout<<"Enter 2 complex no: "<<endl;
 c1.getdata();
 c2.getdata();
 c3=c1+c2;
 cout<<"result is\n";
 c3.display();
 return 0;//(const char *msg)
 
 }