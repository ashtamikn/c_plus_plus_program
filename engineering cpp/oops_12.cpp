#include <iostream>
using namespace std;
class triangle
{
float base, height, areat;
public:
 void area()
 {
 cout << "Enter the base of the triangle: ";
 cin >> base;

 cout << endl;
 cout << "Enter the height of the triangle: ";
 cin >> height;
 cout << endl; 
 areat = 0.5 * base * height;
 cout << "\n\n\n"; 
 cout << base << " is the base length of the triangle. \n\n";
 cout << height << " is the height of the triangle. \n\n";
 cout << areat << " is the area of the triangle. \n\n";
 }
 };
class rectangle
{
float breadth, length, arear;
public:
 void area()
 {
 cout << "Enter the breadth of the rectangle: ";
 cin >> breadth;
 cout << endl;
 cout << "Enter the length of the rectangle: ";
 cin >> length;
 cout << endl;
 arear = breadth * length;
 cout << "\n\n\n";
 cout << breadth << " is the length of the rectangle. \n\n";
 cout << length << " is the height of the rectangle. \n\n";
 cout << arear << " is the area of the rectangle. \n\n";
 }
};
class square
{
float side,areas;
public:
 void area()
 {

 cout << "Enter the height of the square: ";
 cin >> side;
 cout << endl; 
 areas = side * side;
 cout << "\n\n\n";
 cout << side << " is the side of the square:. \n\n";
 cout << areas << " is the area of the square:. \n\n";
 }
};
main()
{
triangle t;
rectangle r;
square s;
t.area();
r.area();
s.area();
 return(0);
}