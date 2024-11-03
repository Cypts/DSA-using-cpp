#include<iostream>
using namespace std;
#include<queue>
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
Node *levelOrder(Node* & root)
{
    cout<<"Enter data: ";
    int n;
    cin>>n;
    queue<Node*> q;
    root=new Node(n);
    q.push(root);
    while(!q.empty())
    {
        Node * temp= q.front();
        q.pop();
        cout<<endl<<"Enter left of: "<<temp->data<<" ";
        int l;
        cin>>l;
        if(l!=-1)
        {
            temp->left=new Node(l);
            q.push(temp->left);
        }
        cout<<endl<<"Enter right of: "<<temp->data<<" ";
        int r;
        cin>>r;
        if(r!=-1)
        {
            temp->right=new Node(r);
            q.push(temp->right);
        }

    }
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
int main()
{
    Node * root=NULL;
    root=levelOrder(root);
    levelOrderTraverseral(root);
}