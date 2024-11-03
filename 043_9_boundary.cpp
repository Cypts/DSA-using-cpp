#include<iostream>
#include<queue>
#include<vector>
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
    int i=0;
    while(!q.empty())
    {
            Node * temp=q.front();
            q.pop();
            if(temp==NULL)
            {
            //if(!ans.empty())
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
void left(Node * root,vector<int> &ans){
    if(root==NULL||(root->left==NULL && root->right==NULL)){
        return;
    }
    ans.push_back(root->data);
    
    if(root->left)left(root->left,ans);
    else left(root->right,ans);
}
void right(Node * root,vector<int> &ans){
    if(root==NULL||(root->left==NULL && root->right==NULL))return;
    if(root->right) right(root->right,ans);
    else right(root->left,ans);
    ans.push_back(root->data);
}
void leaf(Node * root,vector<int> &ans)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    leaf(root->left,ans);
    
    leaf(root->right,ans);
}
vector <int> boundary(Node *root)
{
    vector<int> ans;
    if(root == NULL)
        return ans;
        
    
    ans.push_back(root->data);
    left(root->left,ans);
    leaf(root->left,ans);
    leaf(root->right,ans);
    right(root->right,ans);
    return ans;
}
int main()
{
    vector<int> ans;
    Node * root=NULL;
    // 1 2 4 8 -1 -1 9 10 -1 -1 11 -1 -1 5 -1 18 -1 -1 3 6 -1 -1 7 -1 -1
    root=build(root);
    cout<<endl;
    levelOrderTraverseral(root);
    cout<<endl<<"Boundary element: ";
    ans=boundary(root);
    for(int i:ans){
        cout<<i<<" ";
    }
}
