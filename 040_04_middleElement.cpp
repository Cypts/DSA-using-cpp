#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node * next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertTail(Node * & tail,int data)
{
    Node * temp = new Node(data);
    tail->next=temp;
    tail=temp;
}
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void MiddleApproach1(Node * head,Node* tail)
{ int pos=1;
    Node* temp=head;
    while(head!=tail)
    {
        head=head->next;
        pos++;
    }
    int i =1;
    while( i!=pos/2+1)
    {
        temp=temp->next;
        i++;
    }
    cout<<temp->data<<endl;
}
void MiddleApproach2(Node * head,Node * tail)
{
    int i=1;
    Node* temp=head->next;
    while(temp!=NULL)
    {
        temp=temp->next;
        if(temp!=NULL)
            temp=temp->next;
        head=head->next;
    }
    cout<<head->data<<endl;
}
Node *middle(Node *head) {
    if (head == NULL || head->next == NULL) return head;
    
    Node *slow = head;
    Node *fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}
int main()
{
    Node * n1=new Node(1);
    Node * head= n1;
    Node * tail = n1;
    insertTail(tail,2);
    insertTail(tail,3);
    insertTail(tail,4);
    //insertTail(tail,5);
    display(head);
    MiddleApproach1(head,tail);
    MiddleApproach2(head,tail);
    cout<<middle(head)->data;
}