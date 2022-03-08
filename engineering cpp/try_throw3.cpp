#include<iostream>
using namespace std;
int main(){
    try{
        int age=12;
        if(age>=18){
            cout<<"ACCESS GRANTED TO VOTE"<<endl;

        }
        else{
            throw(age);
        }
    }
catch(int num){
    cout<<"access denied ,you must be atleast 18\n";
    cout<<"age is "<<num<<endl;
}
return 0;

}