#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node * next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insert(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node * middle(Node * head)
{
    Node* slow=head;
    Node * fast =head;
    while(fast!=NULL)
    {
        if(fast->next==NULL)
            return slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    delete fast;
    return slow;
}
Node * reverse(Node * head)
{
    Node * prev=NULL;
    Node * temp=head;
    while(temp!=NULL)
    {
        temp=head->next;
        head->next=prev;
        prev=head;
        head=temp;
    }
    delete temp;
    return prev;
}
bool IsPalindrome(Node * head)
{
    Node * mid=middle(head);
    Node * temp=reverse(mid);
    while(head->next!=mid)
    {
        if(head->data!=temp->data)
        {
            delete temp;
            delete mid;
            return false;
        }
        head=head->next;
        temp=temp->next;
    }
    delete temp;
    delete mid;
    return true;
}
int main()
{
    Node * N1=new Node(1);
    Node * head=N1;
    Node * tail=N1;
    insert(tail,2);
    insert(tail,3);
    insert(tail,2);
    insert(tail,1);
    display(head);
    cout<<IsPalindrome(head);
}