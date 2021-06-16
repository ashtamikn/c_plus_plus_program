#include<iostream>
using namespace std;
class Node{
    public:
    int key;
    int data;
    Node* next;
    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k,int d){
        key=k;
        data=d;
    }
};
class Sll{
    public:
    Node* head;
Sll()
{
    head=NULL;
}
Sll(Node *n){//needs data and key (as n->key and data available)
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
void appendNode(Node *n)//pass by address
{
    if(nodeexists(n->key)!=NULL){
        cout<<"node exists"<<n->key<<endl;
    }
    else{
        if(head==NULL){
            head=n;
            cout<<"node apended"<<endl;
        }
        else{
            Node* ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=n;
            cout<<"node appended"<<endl;
        }
    }
}
void prependnode(Node* n){
    if(nodeexists(n->key)!=NULL){
        cout<<"node exists"<<n->key<<endl;

}
else{
    n->next=head;
    head=n;
    cout<<"node prepended"<<endl;
}
}
void insertnodeafter(int k,Node *n){
    Node* ptr=nodeexists(k);
    if(ptr==NULL){
        cout<<"no node exists with key "<<k<<endl; 
    }
    else{
        if(nodeexists(n->key)!=NULL){
        cout<<"node exists"<<n->key<<endl;
        }
        else{
        n->next=ptr->next;
        ptr->next=n;
        cout<<"node inserted"<<endl;
        }
    }
} 
void deletenodebykey(int k){
    if(head==NULL){
        cout<<"empty"<<endl;
    }
    else if(head!=NULL){
        if(head->key==k){
            head=head->next;
            cout<<"node unlinked"<<k<<endl;
        }
        else{
            Node* temp=NULL;
            Node* prevptr=head;
            Node* currentptr=head->next;
            while(currentptr!=NULL){

                if(currentptr->key==k)
                {
                    temp=currentptr;
                    currentptr=currentptr->next;
                }else{
                    prevptr=prevptr->next;
                    currentptr=currentptr->next;
                }
            }
            if(temp!=NULL){
                prevptr->next=temp->next;
                cout<<"node unlinked"<<k<<endl;
            }
            else{
                cout<<"node doesnt exist with key value"<<k<<endl;
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
    Sll s;
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
            s.appendNode(n1);
            break;
            case 2:
            cout<<"prepend,enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.prependnode(n1);
            break;
            case 3:
            cout<<"insert node after  operation,enter key after which you want to insert this new node"<<endl;
            cin>>k1;
            cout<<"enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.insertnodeafter(k1,n1);
            break;
            case 4:
            cout<<"enter key of node to be deleted"<<endl;
            cin>>k1;
            s.deletenodebykey(k1);
            break;
            case 5:
            cout<<"update node,enter key and new data to be updated"<<endl;
            cin>>key1;
            cin>>data1;
            s.updatenodebykey(key1,data1);
            break;
            case 6:
            s.printlist();
            break;
            default:
            cout<<"enter proper option"<<endl;

        }
       
    }while(option!=0);
    return 0;
}