#include<iostream>

using namespace std;
class student
{
 protected:
 int roll_num;
 public:
 void get_num(int a)
 {
 roll_num=a;
 }
 void put_num(void)
 {
 cout<<"Roll number: "<<roll_num<<"\n";
 }
};
class test: public student
{
 protected:
 float marks;
 public:
 void get_marks(float m)
 {
 marks=m;
 }
 void put_marks(void)
 {
 cout<<"Marks obtained: "<<marks<<"\n";
 }
};
class sports
{
 protected:
 float score;
 public:
 void get_score(float s)
 {
 score=s;
 }
 void put_score(void)
 {
 cout<<"Score: "<<score<<"\n";
 }
};
class result: public test,public sports
{
 float total;
 public:
 void display(void)
 {
 total=marks+score;
 put_num();
 put_marks();
 put_score();
 cout<<"Total score: "<<total<<"\n";
 }
};
main()
{
 result stu;
 stu.get_num(12);
 stu.get_marks(87.6);
 stu.get_score(5.5);
 stu.display();
 
}