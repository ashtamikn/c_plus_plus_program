#include<iostream>
#include<stack>
using namespace std;
bool isOperand(char c)
{
     if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
string PostfixToInfix(string postfix)
{
    stack<string> s;
    for(int i=0;i<postfix.length();i++)
    {
       if(isOperand(postfix[i]))
        {
            string op(1,postfix[i]);//1 copy of postfix[i] we want in op&& op is string now
            s.push(op);
        } 
        else
        {
            string op1=s.top();
            s.pop();
            string op2=s.top();
            s.pop();
            s.push("("+op2+postfix[i]+op1+")");
        }
        
    }
    return s.top();
}
int main()
{
    string infix_exp,postfix_exp;
    cout<<"enter postfix expression\n";
    cin>>postfix_exp;
    
    cout<<"POSTFIX EXPRESSION: "<<postfix_exp<<endl;
    infix_exp=PostfixToInfix(postfix_exp);
    cout<<endl<<"INFIX EXPRESSION: "<<infix_exp<<endl;
    return 0;
}