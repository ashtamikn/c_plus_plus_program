#include<iostream>
using namespace std;
class Arithematic{
    private:
int x,y;
public:

void accept(){

cout<<"give 2 nos"<<endl;
cin>>x>>y;
}


int subtract(){
return (x-y);
}

};
int main(){
Arithematic q;
q.accept();
cout<<q.subtract()<<endl;
}



