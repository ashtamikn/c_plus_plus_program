#include <iostream>
using namespace std;

class marks
{
   public:
   int intmark;
    int extmark;
    public:
    marks()
    {
        int intmark = 0;
        int extmark = 0;
        
    }
    marks(int im,int em){
      intmark = im;
      extmark = em;
    }
    void display()
    {
        cout<<intmark<<endl<<extmark<<endl;
    }
    marks operator + (marks m)
    {
        marks temp;
        temp.intmark=intmark+m.intmark;
        temp.extmark=extmark+m.extmark;
        return temp;
    }
    };
    int main()
    {
    marks m1(10,20),m2(30,40);
    marks m3=m1+m2;
    m3.display();
    return 0;
    }