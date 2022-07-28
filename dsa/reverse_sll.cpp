#include<iostream>
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
    sll()
    {
        head=NULL;
    }
    sll(Node* n)
    {
        head=n;
    }
    void appendnode(Node* n)
    {
        if(head==NULL)
        {
            head=n;
            cout<<"node apeended\n";
        }
        else
        {
            Node* ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=n;
            n->next=NULL;
            cout<<"node appended\n";
        }

    }
    // void reverse(int c){
    //     Node* temp;
    //     Node* ptr=NULL;
    //     Node* thale=NULL;
    //     Node* t=NULL;
    //     cout<<"hi";
    //     if(head=NULL)
    //     {
    //         cout<<"empty";
    //     }
        
    //     else{
    //        cout<<"hlo";
    //          while (t->next!=NULL)
    //         {
    //             /* code */t=t->next;
    //             cout<<"yup";
    //         }
    //         thale=t;
    //         for(int i=0;i<c;i++){
                 
    //         while(temp->next->next!=ptr){
    //             temp->next=temp->next->next;
    //         }
    //         ptr=temp->next;
    //         ptr->next=temp;
            
    //         temp=head;
    //     }
        
    //     }
    //     head=thale;
    // }
    // void print(){
    //     if(head==NULL){
    //         cout<<"no list";

    //     }
    //     else{
    //         Node* tmp=head;
    //   while(tmp->next!=head)
    //      {
    //         cout<<"("<<tmp->data<<")-->\n";
    //         tmp=tmp->next;
    //     }
    //     }
    // }
    Node* Reverse()
{
    Node *tail, *t;
    tail = NULL;
    while (head != NULL) {
        t = head->next;
        head->next = tail;
        tail = head;
        head = t;
        // cout<<t->data;
    }
    return tail;
  // Complete this method
}
void printlist(Node* n){
    Node* p=n;
    if(p==NULL){
        cout<<"no nodes in list"<<endl;
    }
    else
    {
        cout<<"values are"<<endl;
        Node* temp=p;
      while(temp->next!=p)
         {
            cout<<"("<<temp->data<<")-->\n";
            temp=temp->next;
        }
        
    }
    
}
};
int main(){
    sll s;
    int a,c,k;
    cin>>a;
    cin>>c;
    for(int i=0;i<a;i++){
        Node* n=new Node();
        for(int j=0;j<c;j++){
            cin>>k;
            n->data=k;
            s.appendnode(n);
        }
        Node* k=s.Reverse();
        s.printlist(k);
    }
}