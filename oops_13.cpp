#include <iostream>
using namespace std;
class CRectangle {
 float width, height;
 public:
 CRectangle (float,float);
 ~CRectangle ();
 friend float area(CRectangle);
};
CRectangle::CRectangle (float a, float b) {

 width = a;
 height = b;
}
CRectangle::~CRectangle () {

}
float area(CRectangle r)
{
 return r.height * r.width;
}
int main () {
 float h,w;
 cout<<"enter length and breadth of rectangle ";
 cin>>h>>w;
 CRectangle rect (h,w);
 cout << "area: " <<area(rect)<< endl;
 return 0;
}