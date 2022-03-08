#include<iostream>
using namespace std;
namespace first
{
    void display();
    class A
    {
        public:
        void display();
    };

}
void first::display()
{
    cout<<"it's inside ns"<<endl;
}
void first::A::display()
{
    cout<<"it's inside class"<<endl;
}
int main()
{
    first::A obj;
    first::display();
    obj.display();
    return 0;


}