#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};
void insertTail(Node * & tail,int data)
{
    Node * temp = new Node(data);
    tail->next=temp;
    tail=temp;
}
Node * reverse(Node * head,Node * tail,int k)
{
    // if(head==NULL)
    // {
    //     return head;
    // }
    int curn =1;
    Node* curr=head;
    Node* pre=NULL;
    while(head!=NULL)
    {
        curn =1;
        while(curn!=k+1)
        {
            head=head->next;
            curr->next=pre;
            pre=curr;
            curr=head;
            curn++;
        }
        // pre=curr;
        // head=head->next;
        // curr=head;

    }
    return pre;
}
Node * reverseK(Node * head,Node * tail,int k)
{
    Node * temp = head;
    Node * ans=NULL;
    
    //while(head!=NULL)
    //{
        // int i=1;
        // while(i!=k+1)
        // {
        //     temp=head;
        //     temp=temp->next;
        //     i++;
        // }
        // tail=temp;
        ans=reverse(head,tail,3);
    
        
    //}
    return ans;
}
void display(Node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<< endl;
}
int main()
{
    Node * N1=new Node(1);
    Node * tail= N1;
    Node * head= N1;
    insertTail(tail,2);
    insertTail(tail,3);
    insertTail(tail,4);
    insertTail(tail,5);
    insertTail(tail,6);
    display(head);
    Node * ans= reverseK(head,tail,3);
    display(ans);
}