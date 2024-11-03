#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data)
    {
        this->data=data;
        this-> right=NULL;
        this-> left=NULL;
    }
};
Node *build(Node *root){
    cout<<"Enter data: ";
    int data;
    cin>>data;
    if(data==-1) return NULL;
    root=new Node(data);
    cout<<endl<<"Enter left "<<data<<" ";
    root->left=build(root->left);
    cout<<endl<<"Enter rigth "<<data<<" ";
    root->right=build(root->right);
    return root;
}
void traversing(Node * root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node * temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
        }
    }
}
int height(Node *root)
{
    if(root==NULL) return 0;
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
int main()
{
    Node* root=NULL;
    root=build(root);
    // 1 2 4 -1 8 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 9 10 -1 -1 -1
    traversing(root);
    cout<<endl<<"Ans: "<<height(root);
}