#include <iostream> 
using namespace std; 
  
void print(int i) { 
  cout << " Here is int " << i << endl; 
} 
void print(double  f) { 
  cout << " Here is float " << f << endl; 
} 
void print(const char* c) { //void print(string c)=>char*=string
  cout << " Here is char* " << c << endl; 
} 
  
int main() { 
  print(10); 
  print(10.10); 
  print("ten"); 
  return 0; 
}