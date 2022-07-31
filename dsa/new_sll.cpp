#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=NULL;
    }
    Node(int d){
        data=d;
    }

};
class sll{
    public:
    Node* head;
    sll(){
        head=NULL;
    }
    sll(Node* h){
        head=h;

    }
    void insert(Node* n){
        Node* ptr;
        if(head==NULL){
            head=n;
        }
        else{
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr=n;

        }
        cout<<"appended"<<endl;
        cout<<head->data<<"  "<<ptr->data<<"   "<<n->data;

    }
    void print(){
        Node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;

        }


    }

};
int main(){
    sll s;
    int d;
    Node* n=new Node();
    for (int i=0;i<5;i++){
    cout<<"enter data"<<endl;
    cin>>d;
    if(d%2==0){
    n->data=d;
    n->next=NULL;
    
    s.insert(n);
    cout<<"main"<<endl;
    }
    }
    s.print();
}