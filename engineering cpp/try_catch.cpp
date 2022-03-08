// hackerrank 16
// Read a string, , and print its integer value; if  cannot be converted to an integer, print Bad String.
#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try
    {
        int no;
        no=stoi(S);//The stoi() function takes a string as an argument and returns its int value
        cout<<no<<endl;
    }
    catch(exception a)//or catch(...)
    {
        cout<<"Bad String";
    }
    return 0;
}

   