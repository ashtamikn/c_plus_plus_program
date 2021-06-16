#include<iostream>
using namespace std;
class Node
{
    public:
    int key;
    int data;
    Node* next;
    Node* previous;
    Node()
    {
        key=0;
        data=0;
        next=NULL;
        previous=NULL;

    }
    Node(int k,int d)
    {
        key=k;
        data=d;
    }
};
class Dll
{
    public:
    Node* head;
    Dll(){
        head=NULL;
    }
    Dll(Node *n){
        head=n;
    }
    Node* nodeexists(int k)
    {
     Node* temp=NULL;
     Node* ptr=head;
     while(ptr!=NULL){
         if(ptr->key==k){
            temp=ptr; 
         }
         ptr=ptr->next;
     }
     return temp;
    }
    void appendnode(Node* n)
    {
        if(nodeexists(n->key)!=NULL)
        {
            cout<<"node exists already"<<endl;
        }
        else
        {
            if(head==NULL)
            {
                head=n;
                cout<<"node appended as head node"<<endl;
            }
            else
            {
                Node* ptr=head;
                while(ptr->next!=NULL){
                    ptr=ptr->next;

                }
                ptr->next=n;
                n->previous=ptr;
                cout<<"node appended"<<endl;
            }
            
        }
        
    }
    void prependnode(Node *n)
    {
        if(nodeexists(n->key)!=NULL)
    {
        cout<<"node already exits"<<endl;
    }
    else
    {
         if(head==NULL)
            {
                head=n;
                cout<<"node appended as head node"<<endl;
            }
          else{  
            head->previous=n;
            n->next=head;
            head=n;
            cout<<"node prepended"<<endl;
    }
    }
    }
    void insertnodeafter(int k,Node* n)
    {
         Node* ptr=nodeexists(k);
    if(ptr==NULL){
        cout<<"no node exists with key "<<k<<endl; 
    }
    else{
        if(nodeexists(n->key)!=NULL){
        cout<<"node exists"<<n->key<<endl;
        }
        else{
            cout<<"inserting\n";
            Node *nextnode=ptr->next;
            if(nextnode==NULL)
            {
                ptr->next=n;
                n->previous=ptr;
                cout<<"node inserted at end\n";
            }
            else
            {
                n->next=nextnode;
                nextnode->previous=n;
                n->previous=ptr;
                ptr->next=n;
                cout<<"node inserted in between\n";
            }
        }
    }
    }
    void deletenodebykey(int k)
    {
       Node* ptr=nodeexists(k);
    if(ptr==NULL){
        cout<<"no node exists with key "<<k<<endl; 
    }
    else
    {
        if(head->key==k){
            head=head->next;
            cout<<"node unlinked"<<k<<endl;
        }
        else{
            Node* nextnode=ptr->next;
            Node *prevnode=ptr->previous;
            if(nextnode==NULL){
                prevnode->next=NULL;
                cout<<"node unlinled at end\n";
            }
            else{
                prevnode->next=nextnode;
                nextnode->previous=prevnode;
                cout<<"node unlinked in between\n";
            }
        }

    }
    }
    void updatenodebykey(int k,int d)
{
    Node* ptr=nodeexists(k);
    if(ptr!=NULL){
        ptr->data=d;
        cout<<"node udated"<<endl;

    }
    else{
        cout<<"node is not present with key value"<<k<<endl;
    }
}
void printlist(){
    if(head==NULL){
        cout<<"no nodes in list"<<endl;
    }
    else
    {
        cout<<"values are"<<endl;
        Node* temp=head;
        while(temp!=NULL){
            cout<<"("<<temp->key<<","<<temp->data<<")-->\n";
            temp=temp->next;
        }
        
        
    }
}


};
int main(){
    Dll obj;
    int option;
    int key1,k1,data1;
    do{
        cout<<"1.append"<<endl;
        cout<<"2.prepend"<<endl;
        cout<<"3.insertnode after"<<endl;
        cout<<"4.delete node"<<endl;
        cout<<"5.update node"<<endl;
        cout<<"6.print"<<endl;
        cin>>option;
        Node* n1=new Node();//dynamic memory allocation
        switch(option){
            case 0:break;
            case 1:
            cout<<"append node poperation key and node to be appended"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            obj.appendnode(n1);
            break;
            case 2:
            cout<<"prepend,enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            obj.prependnode(n1);
            break;
            case 3:
            cout<<"insert node after  operation,enter key after which you want to insert this new node"<<endl;
            cin>>k1;
            cout<<"enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            obj.insertnodeafter(k1,n1);
            break;
            case 4:
            cout<<"enter key of node to be deleted"<<endl;
            cin>>k1;
            obj.deletenodebykey(k1);
            break;
            case 5:
            cout<<"update node,enter key and new data to be updated"<<endl;
            cin>>key1;
            cin>>data1;
            obj.updatenodebykey(key1,data1);
            break;
            case 6:
            obj.printlist();
            break;
            default:
            cout<<"enter proper option"<<endl;

        }
       
    }while(option!=0);
    return 0;
}