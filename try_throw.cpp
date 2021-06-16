#include<iostream>
using namespace std;
class Test1{
};
class Test2{

};
int main()
{
for(int i=1;i<=2;i++){

try{
   if(i==1)
       throw Test1();
   else if(i==2)
     throw Test2();
}
   catch(Test1 ob1)
   {
       cout<<" test1 exception\n";
   }
   catch(Test2 ob2){
    cout<<"test 2 exception\n";
   }
}
   return 0;
}