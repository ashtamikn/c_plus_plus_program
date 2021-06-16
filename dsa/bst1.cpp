#include<iostream>
#define SPACE 10
using namespace std;
class treeNode{
    public:
    int value;
    treeNode* left;
    treeNode* right;
    treeNode(){
        value=0;
        left=NULL;
        right=NULL;

    }
    treeNode(int v){
        value=v;
         left=NULL;
        right=NULL;
    }
};
class BST{
    public:
    treeNode* root;
    BST(){
        root=NULL;

    }
    bool istreEmpty(){
        if(root==NULL){
            return true;
        }
        else{
            return false;
        }
 
   }
   void insertnode(treeNode *new_node){
if(root==NULL){
    root=new_node;
    cout<<"value inserted as root node\n";
}
else{
    treeNode *temp=root;
    while (temp!=NULL)
    {
        if(new_node->value==temp->value){
            cout<<"value already exists\n";
            return;
        }
        else if((new_node->value<temp->value)&&(temp->left==NULL)){
            temp->left=new_node;
            cout<<"value inserted to left\n";
            break;
        }
        else if(new_node->value<temp->value){
            temp=temp->left;
        }
        else if((new_node->value>temp->value)&&(temp->right==NULL)){
            temp->right=new_node;
             cout<<"value inserted to right \n";
              break;
        }
        else{
            temp=temp->right;
        }
    }
    
}
}
void postorderDisplay(treeNode* r)
{
    if(r==NULL)
    {
    return;
    }
     else{ 
       postorderDisplay(r->left);
        postorderDisplay(r->right);
       cout<<r->value<<endl;
    }
}


};
int main(){
    BST obj;
   
    int option,x;
    do{
        cout<<"select operation\n";
        cout<<"1.insert node\n";
        cout<<"2.display\n";
        cout<<"enter option\n";
        cin>>option;
         treeNode* hey=new treeNode();
        switch(option){
            case 1:
           
            cout<<"enter data\n";
            cin>>x;
            hey->value=x;
            obj.insertnode(hey);
            break;
            case 2:
            obj.postorderDisplay(obj.root);
            break;
            case 3:
            break;
            default:cout<<"enter proper choice\n";
            break;
        }
    }while(option!=3);
}