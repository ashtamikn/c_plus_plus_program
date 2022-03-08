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
 void display(){
     cout<<X<<" "<<Y<<" "<<Z<<endl;
 }
};
int main(){
    Point p;
    p.display();
    Point p1(1,2,3);
    p1.display();
    return 0;
}