// erase(int position):
// Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
// erase(int start,int end):
// Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> num;
        v.push_back(num);
    }
    int p1;
    cin>>p1;
    v.erase(v.begin()+p1-1);
    
    
    int p2,p3;
    cin>>p2>>p3;
    v.erase(v.begin()+p2-1,v.begin()+p3-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
