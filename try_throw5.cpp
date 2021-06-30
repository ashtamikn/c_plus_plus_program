//hackerrank 17
//Write a Calculator class with a single method: int power(int,int). 
//The power method takes two integers,  and , as parameters and returns
// the integer result of . If either  or  is negative, then the method must throw an
// exception with the message: n and p should be non-negative.
#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Calculator{
    public:
    int n,p;
    int power(int n,int p){
        
        if(n>=0 &&p>=0){
            return pow(n,p);
        }
        else
        {
        throw runtime_error("n and p should be non-negative");//invalid_argument or runtime_error
    }
    }
    
};
//Write your code here

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}