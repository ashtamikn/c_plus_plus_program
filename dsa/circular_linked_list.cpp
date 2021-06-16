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
class Cll{
    public:
    Node* head;
Cll()
{
        head=NULL;
}
Cll(Node* n)
{
        head=n;
}
  Node* nodeexists(int k)
  {
      Node* temp=NULL;
      Node* ptr=head;
      if(ptr==NULL){
          return temp;
      }
      else{
      do{
         if(ptr->key==k){
             temp=ptr;
         } 
         ptr=ptr->next;
      }while(ptr!=head);
      return temp;
  } 
  }
  void appendnode(Node* n){
      if(nodeexists(n->key)!=NULL){
          cout<<"node already exists\n";
      }
      else{
          if(head=NULL){
              head=n;
              n->next=head;
              cout<<"node appended\n";
          }
          else{
              Node* ptr=head;
              while(ptr->next!=head){
                  ptr=ptr->next;
              }
                ptr->next=n;
                n->next=head;
                cout<<"node appended\n";
          }
      }
  }
  void prependnode(Node* n){
       if(nodeexists(n->key)!=NULL){
        cout<<"node exists"<<n->key<<endl;
  }
  else
  {
      if(head==NULL){
          head=n;
          n->next=head;
      }
  
  
  else{
      Node* ptr=head;
              while(ptr->next!=head){
                  ptr=ptr->next;
              }
                ptr->next=n;
      n->next=head;
      head=n;
      cout<<"node prepended\n";
  }
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
            if(ptr->next==head){
        n->next=head;
        ptr->next=n;
        cout<<"node inserted"<<endl;
        }
        else{
            n->next=ptr->next;
            ptr->next=n;
            cout<<"node inserted\n";
        }
        }
    }
  }
  void deletenodebykey(int k){
      Node* ptr=nodeexists(k);
      if(ptr==NULL){
          cout<<"no such node\n";
      }
      else{
    if(head==NULL){
        cout<<"empty"<<endl;
    }
    else if(ptr==head){
        if(head->next==NULL){
            head=NULL;
            cout<<"head node unlinked"<<k<<endl;
        }
        else{
            Node* ptr=head;
            while (ptr->next!=head)
            {
                /* code */ptr=ptr->next;
            }
            ptr->next=head->next;
            head=head->next;
            cout<<"node unlinked\n";
            
        }
    }
    else
    {
        Node* temp=NULL;
        Node* prevptr=head;
        Node* currentptr=head->next;
        while(currentptr!=NULL)
        {
            if(currentptr->key==k){
                temp=currentptr;
                currentptr=NULL;
            }
            else{
                prevptr=prevptr->next;
                currentptr=currentptr->next;
            }
        }
        prevptr->next=temp->next;
        cout<<"node unlinked \n";
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
      while(temp->next!=head)
         {
            cout<<"("<<temp->key<<","<<temp->data<<")-->\n";
            temp=temp->next;
        }
        
    }
    
}
    
};
int main(){
    Cll c;
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
            cout<<"append node operation key and node to be appended"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            c.appendnode(n1);
            break;
            case 2:
            cout<<"prepend,enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            c.prependnode(n1);
            break;
            case 3:
            cout<<"insert node after  operation,enter key after which you want to insert this new node"<<endl;
            cin>>k1;
            cout<<"enter key and data"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            c.insertnodeafter(k1,n1);
            break;
            case 4:
            cout<<"enter key of node to be deleted"<<endl;
            cin>>k1;
            c.deletenodebykey(k1);
            break;
            case 5:
            cout<<"update node,enter key and new data to be updated"<<endl;
            cin>>key1;
            cin>>data1;
            c.updatenodebykey(key1,data1);
            break;
            case 6:
            c.printlist();
            break;
            default:
            cout<<"enter proper option"<<endl;

        }
       
    }while(option!=0);
    return 0;
}