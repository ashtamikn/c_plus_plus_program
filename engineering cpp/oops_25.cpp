#include <iostream>
 
#include<math.h>
using namespace std;
 class coord {
 int X;
 int Y;
 public:
 coord() {X=Y=0;}
 coord(int x, int y)
 { X=x; Y=y;}
 int getX(){ return X;}
 int getY(){return Y;}
 //int getZ(){return Z;}
};
class rectangle
{
 coord UpperLeftCoord;
 coord BottomRightCoord;
 public:
 rectangle(){}
 rectangle(coord &p1,coord &p2)
 { UpperLeftCoord=p1;
 BottomRightCoord=p2;
 }
 void showdata()
 {
cout<<"UpperLeftCoordinate="<<"("<<UpperLeftCoord.getX()<<","<<UpperLeftCoord.getY()
<<")";
cout<<"\nBottomLeftCoordinate="<<"("<<BottomRightCoord.getX()<<","<<BottomRightCoord.getY()
<<")";
 }

int getLength()
 { return(abs(UpperLeftCoord.getX()- BottomRightCoord.getX()));
 }
 int getBreath()
 { return(abs(UpperLeftCoord.getY()- BottomRightCoord.getY()));
 }
 int Area()
 { return (getLength()*getBreath());
 }
};
 main()
{
 coord c1(2,4);
 coord c2(6,2);
 rectangle r1(c1,c2);
 r1.showdata();
 int f=r1.Area();
cout<<"\nArea="<<f;
}