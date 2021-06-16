#include<iostream>//function template
using namespace std;
template<typename T>
T smax(T x,T y)//int smax(int x,int y) u can also write c smax(c x,c y)
{
    return (x>y)?x:y;//T z;z=(x>y)?x:y;return z;
}
int main(){
    int res=smax<int>(3,4);//to store
    cout<<smax<int>(3,4)<<endl;
    cout<<smax<float>(3.0,4.0)<<endl;
    cout<<smax<char>('x','y')<<endl;
    return 0;
}