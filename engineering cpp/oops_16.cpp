#include<iostream>
#include<stdio.h>
#include<string.h>
//#include<conio>
using namespace std;



class Word 
{
 char *word;
 int length;
 public:
 Word()
 {
 length=0;
 word=new char[length+1];
 }
 Word(const char *s)
 {
 length=strlen(s);
 word=new char[length+1];
 strcpy(word,s);
 }
 void display()
 { cout<<word<<"\n";
 }
 ~Word(){
     cout<<"destructor is called\n";
 }
};
int main()
{
const char *w1="Girl";
 Word word1(w1);
 Word word2("Good");
 word1.display();
 word2.display();
}