#include<iostream>
using namespace std;
class patient
{
protected:
 char *name,*disease;
public:
patient(char *n,char *d)
{
 name=n;
 disease=d;
}
 void putdata()
 {
 cout<<"patient's name is "<<name<<endl;
 cout<<"Disease is "<<disease<<endl;
 }
};
class in_patient:public patient
{
 float roomrent;
public:
 in_patient(char *n,char *d,float rr):patient(n,d)
 {
 roomrent=rr;
 }
 void putdata()
 {
 patient::putdata();
 cout<<"Room rent is "<<roomrent;
 cout<<endl;
 }
};
class out_patient:public patient
{
 float opd_charges;
public:
 out_patient(char *n,char *d,float opd):patient(n,d)
 {
 opd_charges=opd;
 }
 void putdata()
 {
 patient::putdata();
 cout<<"OPD charges is "<<opd_charges<<endl;
 }
};
int main()
{
 char *nm,*dis;
 float rr1,op1;
 nm=new char;
 dis=new char;
 cout<<"Enter patient's name "<<endl;
 cin>>nm;
 cout<<"Enter disease "<<endl;
 cin>>dis;
 cout<<"Enter room rent "<<endl;
 cin>>rr1;
 cout<<"Enter opd charges "<<endl;
 cin>>op1;
 in_patient ip(nm,dis,rr1);
 out_patient op(nm,dis,op1);
 cout<<"Details of In_patient "<<endl;
 ip.putdata();
 cout<<"Details of Out_patient "<<endl;
 op.putdata();
}