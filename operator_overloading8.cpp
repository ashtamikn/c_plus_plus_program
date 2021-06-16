//pointer to member-> operators overloading
#include <iostream>
using namespace std;
class  Marks{
int mark;
public:
Marks(int m){
    mark=m;
}
void whatsyourmark(){
    cout<<" hey i got "<<mark<<" marks"<<endl;
}
Marks *operator ->(){
    return this;
}
};
int main(){
    Marks me(90);
    me.whatsyourmark();
    me->whatsyourmark();
    return 0;
}