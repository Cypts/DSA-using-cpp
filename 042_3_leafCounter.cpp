#include<iostream>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * build(Node * root){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    if(data==-1) return NULL;
    root=new Node(data);
    cout<<endl<<"Enter left of "<<data<<endl;
    root->left=build(root->left);
    cout<<endl<<"Enter right of "<<data<<endl;
    root->right=build(root-> right);
    return root;
}
void inOrder(Node * root , int &count){
    if(root==NULL) {
        return;
        }
    if(root->left ==NULL && root->right==NULL)count++;
    inOrder(root->left,count);
    inOrder(root->right,count);

}
int leafCounter(Node * root)
{
    int count=0;
    inOrder(root,count);
    return count;
}
int main()
{
    Node * root=NULL;
    root=build(root);
    int l=leafCounter(root);
    cout<<l;
}