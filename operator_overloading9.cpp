
//() operators overloading
#include <iostream>
using namespace std;
class  Marks{
int mark;
public:
Marks(int m){
    cout<<"constructor \n";
    mark=m;
}
void whatsyourmark(){
    cout<<" hey i got "<<mark<<" marks"<<endl;
}


Marks operator ()(int mk){
    mark=mk;
    cout<<"operator\n";
    return *this;
}
};
int main(){
    Marks me(90);
    me.whatsyourmark();
   me(95);
   me.whatsyourmark();
   return 0;
}