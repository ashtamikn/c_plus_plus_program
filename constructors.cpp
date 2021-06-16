#include<iostream>
using namespace std;
class person{
public:
int age;
char* name;
person(){
age=0;
name=(char *)"no name";
cout<<"default constructor"<<endl;
}
person(char* x){
name=x;
age=18;
cout<<"parameterized with name"<<endl;
}
person(char* x, int y){
age=y;
name=x;
cout<<"parameterized with name and age"<<endl;
}
person(person &t){
age=t.age;
name=t.name;
}
void introduce(){
cout<<"hy i am "<<name<<" and i am "<<age<<"yrs old"<<endl;
}
};
int main(){
    
person a;
a.introduce();
person b("ashi");
b.introduce();

person p("veda",56);
p.introduce();
person c(p);//==person c=p;
c.introduce();
person d(b);//==person d=b;
d.introduce();
person e=a;//==person e(a)
e.introduce();

return 0;
}