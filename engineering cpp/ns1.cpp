#include<iostream>
using namespace std;

namespace first
{
    int val=500;//variable created inside name space

    
} // namespace std;
//global variable
int val=100;
int main()
{
    //local variable
    //int val=200;
    cout<<first::val<<'\n';
    cout<<val<<endl;
    return 0;
}

// using namespace first;
// int main () {
//    // This calls function from first name space.
   
//    cout<<val<<'\n';
//    return 0;
// }
