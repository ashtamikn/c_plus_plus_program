#include <iostream>
using namespace std;

void swapnum(int i, int j) {
  int temp = i;
  i = j;
  j = temp;
}
void swap(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}


int main(void) {
  int a = 10;
  int b = 20;

  swapnum(a, b);
    cout<<"A is "<<a<< "and B is "<<b<<endl;

  swap(a,b);
  cout<<"A is "<<a<< "and B is "<<b;
  return 0;
}