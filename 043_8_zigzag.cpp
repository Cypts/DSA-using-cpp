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
    int i=0;
    while(!q.empty())
    {
        vector<int> ans;
            Node * temp=q.front();
            q.pop();
            if(temp==NULL)
            {
            //if(!ans.empty())
                for(int i=0;i!=ans.size()-1;i++) cout<<ans[i]<<" ";
                cout<<endl;
                if(!q.empty())q.push(NULL);
            }
            else{
                if(i%2!=0){
                    ans.push_back(temp->data);
                    if(temp->left!=NULL)
                        q.push(temp->left);
                    if(temp->right!=NULL)
                        q.push(temp->right);
                }
                else{
                    ans.push_back(temp->data);
                    if(temp->right!=NULL)
                        q.push(temp->right);
                    if(temp->left!=NULL)
                        q.push(temp->left);
                }
            }
        i=i+1;
        
    }
}
int main()
{
    Node * root=NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root=build(root);
    cout<<endl;
    levelOrderTraverseral(root);
}
