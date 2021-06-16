#include<iostream>
using namespace std;
class publication
{
 char title[40];
 float price;
public:
 void getdata()
 {
 cout<<"Enter publication :";
 cin>>title;
 cout<<"Enter price ";
 cin>>price;
 }
 void print()
 {
 cout<<"\tPublication ="<<title<<endl;
 cout<<"\tPrice="<<price<<endl;
 }
};
 class book:public publication
 {
 float accessionno;
 public:
 void getdata()
 {
 publication::getdata();
 cout<<"Enter Accession number ";
 cin>>accessionno;
 }
 void print()
 {
 publication::print();
 cout<<"Accession number is "<<accessionno;
 }
 };
 class magazine:public publication
 {
 int volumeno;
 public:
 void getdata()
 {
 //publication::getdata();
 cout<<"Enter Volume number of magazine ";
 cin>>volumeno;
 }
 void print()
 {
 publication::print();
 cout<<"Volume number is"<<volumeno<<endl;
 }
 };
 class journal:public book,public magazine
 {
 char name[20];
 public:
 void getdata()
 {
 book::getdata();
 magazine::getdata();
 cout<<"enter name of journal ";
 cin>>name;
 }
 void print()
 {
 cout<<"name of journal is "<<name<<endl;
 book::print();
 magazine::print();
 }
 };
 int main()
 {
 journal j;
 j.getdata();
 j.print();
 }