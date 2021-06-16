#include <iostream>

 using namespace std;
 class Point {
 int X;
 int Y;
 int Z;
 public:
 Point() {X=Y=Z=0;}
 Point(int x, int y, int z)
 { X=x; Y=y;Z=z;}
 int getX(){ return X;}
 int getY(){return Y;}
 int getZ(){return Z;}
 };
class Sphere
{
 int radius;
 Point center;
 public:
 Sphere(){}
 Sphere(int rad,Point &p)
 { radius=rad;
 center=p;
 }
 void showdata()
 { cout<<"Radius="<<radius;

cout<<"\nCenter="<<"("<<center.getX()<<","<<center.getY()<<","<<center.getX()<<")";
 }
 float volume()
 { return (3.14*radius*radius*radius);
 }
};
int main()
{ 
 Point YourPoint();
 Point p(3,4,5);
 Sphere s1(1,p); 
 s1.showdata();
 float f=s1.volume();
 cout<<"\nVolume="<<f;
return 0;
}