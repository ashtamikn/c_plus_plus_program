// hackerrank 21
// Write a single generic function named printArray; this function must take an array of generic elements as
//  a parameter (the exception to this is C++, which takes a vector). The locked Solution class in your editor tests your function.
#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <typename T>
void printArray(vector<T> a){
    for(T i:a)
    //The variable i ranges over the array a.
     
    cout<<i<<endl;
    
}
/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}