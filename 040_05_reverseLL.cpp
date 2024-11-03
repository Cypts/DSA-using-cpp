#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data)
    {
        this ->data =data;
        this->next=NULL;
    }
};
void insertTail(Node * & tail,int data)
{
    Node * temp= new Node(data);
    tail->next=temp;
    tail=temp;
}
void display(Node * head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(Node *head)
{
    if(head==NULL)
        return;
    reverse(head->next);
    cout<<head->data<<" ";
    
}
void reverse2(Node * head)
{
    Node* curr=head;
    Node* pre=NULL;
    Node* forward=NULL;
    while(head!=NULL)
    {
        head=head->next;
        curr->next=pre;
        pre=curr;
        curr=head;
    }
    display(pre);
}
int main()
{
    Node* N1= new Node(1);
    Node* tail = N1;
    Node * head=N1;
    insertTail(tail,2);
    insertTail(tail,3);
    insertTail(tail,4);
    insertTail(tail,5);
    insertTail(tail,6);
    display(head);
    reverse(head);
    cout<<endl;
    reverse2(head);
}