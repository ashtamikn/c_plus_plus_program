#include<iostream>
using namespace std;
double division(int x,int y){
   if(y==0){
      throw "division by zero condition";
   }
   return(x/y);
}
int main(){
   int x=8,y=2;
   double z=0;
   try{
      z=division(x,y);
      cout<<z<<endl;
   }
   catch(const char* msg){
      cout<<msg<<endl;
   }
   return 0;
}