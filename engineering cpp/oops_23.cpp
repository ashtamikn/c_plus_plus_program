#include<iostream>

#include<string.h>
using namespace std;
class Publication
{
 protected:
 char title[20];
 float price;
 public:
 virtual void get_data(){}
 virtual void put_data(){}
};
class Book:public Publication
{
 int page_count;
 public:
 void get_data();
 void put_data();
};
class Tape:public Publication
{
 float play_time;
 public:
 void get_data();
 void put_data();
};
void Book::get_data()
{
 cout<<"\nTitle? ";
 cin.getline(title,20);
 cout<<"\nPrice? ";
 cin>>price;
 cout<<"\nPage_count";
 cin>>page_count;
}
void Book::put_data()
{
 cout<<"\nTitle: "<<title;
 cout<<"\nPrice: "<<price;
 cout<<"\nPage_count: "<<page_count;
}
void Tape::get_data()
{ cin.get();
 cout<<"\nTitle? ";
 cin.getline(title,20);
 cout<<"\nPrice? ";
 cin>>price;
 cout<<"\nPlay_time?";
 cin>>play_time;
}
void Tape::put_data()
{
 cout<<"\nTitle: "<<title;
 cout<<"\nPrice: "<<price;
 cout<<"\nPlay_time: "<<play_time<<endl;
}
 main()
{
 Book book1;
 cout<<"Please enter book details:\n";
 book1.get_data();
 Tape tape1;
 cout<<"Please enter Tape details:\n";
 tape1.get_data();
 Publication* list[2];
 list[0]=&book1;
 list[1]=&tape1;
 cout<<"\n Book details:\n";
 list[0]->put_data();
 cout<<"\n\n Tape Details:\n";
 list[1]->put_data();
 
}