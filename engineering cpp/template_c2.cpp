//class template
#include<iostream>
using namespace std;
template<class T>
class caluclator{
    private:
    T num1,num2;
    public:
    caluclator(T n1,T n2){
        num1=n1;
        num2=n2;
    }
    void display(){
        cout<<"the nos are"<<num1<<"and"<<num2<<endl;
        cout<<"addition is:"<<add()<<endl;
        cout<<"subtraction is:"<<sub()<<endl;
        cout<<"product is:"<<mul()<<endl;
        cout<<"division is:"<<div()<<endl;
    }
    T add();
    T sub(){return num1-num2;}
    T mul(){return num1*num2;}
    T div(){return num1/num2;}
};
template<class T>
T caluclator<T>::add(){
    return num1+num2;

}
int main(){
    caluclator<int>intCalc(4,2);
    caluclator<float>floatcalc(4.4,2.2);
    cout<<"int results are:"<<endl;
    intCalc.display();
    cout<<"float results are:"<<endl;
    floatcalc.display();
    return 0;

}

