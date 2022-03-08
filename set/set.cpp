// set<int>s; //Creates a set of integers.
// int length=s.size(); //Gives the size of the set.
// s.insert(x); //Inserts an integer x into the set s.
// s.erase(val); //Erases an integer val from the set s.

// set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
// Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int type,query;
        cin>>type>>query;
        switch (type) {
        case 1:s.insert(query);
        break;
        case 2:s.erase(query);
        break;
        case 3:cout << (s.find(query) == s.end() ? "No" : "Yes") << endl;
        break;
        }
    }
    return 0;
}



