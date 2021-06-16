#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int arr[5];
    public:
    stack()
{
    top=-1;
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
    }
}
bool isempty(){
    if(top==-1)
    return true;
    else
    {
        return false;
    }
     
}
bool isfull()
{
    if(top==4)
    return true;
    else 
    return false;
}
void push(int val)
{
    if(isfull())
    {
        cout<<"full"<<endl;

    }
    else{
        top++;
        arr[top]=val;
    }
}
int pop()
{
    if(isempty())
    {
        cout<<"empty"<<endl;
        return 0;
    }
    else{
        int popvalue=arr[top];
        arr[top]=0;
        top--;
        return popvalue;
    }
}
int count(){
    return (top+1);
}
int peek(int pos)
{
    if(isempty()){
        cout<<"empty"<<endl;
        return 0;
    }
    else{
        return arr[pos];
    }
}
void change(int pos,int val){
    arr[pos]=val;
    cout<<"value changed at position "<<pos<<endl;
}
void display(){
    cout<<"stack is";
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<endl;
            }
}
};
int main()
{
    stack s1;
    int option,position,value;
    do{
cout<<"1.push"<<endl;
cout<<"2.pop"<<endl;
cout<<"3.is empty"<<endl;
cout<<"4.isfull"<<endl;
cout<<"5.peek"<<endl;
cout<<"6.count"<<endl;
cout<<"7.change"<<endl;
cout<<"8.display"<<endl;
cout<<"9.clear screen"<<endl;
cin>>option;
switch(option)
{
    case 1:
    cout<<"entr no"<<endl;
    cin>>value;
    s1.push(value);
    break;
    case 2:
    cout<<"popped value"<<s1.pop()<<endl;
    break;
    case 3:
    if(s1.isempty())
    cout<<"stack is empty"<<endl;
    break;
    case 4:
    if(s1.isfull())
    cout<<"full"<<endl;
    else
    cout<<"not full"<<endl;
    break;
    case 5:
    cout<<"enter pos"<<endl;
    cin>>position;
    cout<<s1.peek(position)<<endl;
    break;
    case 6:
    cout<<s1.count()<<endl;
    case 7:
    cout<<"enter pos"<<endl;
    cin>>position;
    cout<<"enter value"<<endl;
    cin>>value;
    s1.change(position,value);
    break;
    case 8:
    s1.display();
    break;
    default:
    cout<<"enter  no properly"<<endl;
}
    }while(option!=0);
    return 0;
}