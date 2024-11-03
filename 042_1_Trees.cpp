#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node * left;
    Node * right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *build(Node *root)
{
    int n;
    cout<<endl<<"Enter value: ";
    cin>>n;
    if(n==-1) return NULL;
    root=new Node(n);
    cout<<endl<<"Enter left of "<<n<<" ";
    root->left=build(root->left);
    cout<<endl<<"Enter right of "<<n<<" ";
    root->right=build(root->right);
    return root;
}
void levelOrderTraverseral(Node * root)
{
    queue<Node*> q;
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
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }
}
void preOrder(Node * root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node * root){
    if(root==NULL) return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node * root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
bool Search(Node * root,int key)
{
    if(root==NULL) return false;
    if(root->data==key) return true;
    Search(root->left,key);
    Search(root->right,key);
}
int main()
{
    Node * root=NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root=build(root);
    cout<<endl;
    levelOrderTraverseral(root);
    cout<<endl<<"In order: ";
    inOrder(root);
    cout<<endl<<"Pre order: ";
    preOrder(root);
    cout<<endl<<"Post order: ";
    postOrder(root);
    cout<<endl;
    if(Search(root,19)) cout<<"found";
    else cout<<"Not found";
}