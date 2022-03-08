// Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum nu
// mber of consecutive 's in 's binary representation. When working with different bases, it is common to show the base a
// s a subscript
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0,max=0;
    cin >> n;

    while(n)
    {
        if (n&1)//checks binary number is odd ...since 1 is LSB  of odd numbers in binary
            count++;
        else 
            count = 0;
        if (max < count)
            max = count;
        n>>=1;//n=n>>1 =>shifts bianry number of n to 1 step right..5/2=2  basically binary number is deviding by 2 0101 n>>1=0010
    }
    cout << max;

    return 0;
}

