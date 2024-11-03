#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
Node *merge(Node *head1, Node *head2)
{
    if(head1==NULL)
        return head2;
    if(head2== NULL)
        return head1;
    Node * head;
    Node * tail;
    Node * nxt;
    if(head1->data > head2->data)
    {  
        head=head2;
        tail=head2;
        nxt=head1;
    }
    else
    {
        head=head1;
        tail=head1;
        nxt=head2;
    }
    while(tail->next!=NULL && nxt!=NULL)
    {
        int value1=tail->data;
        int value2 =nxt->data;
        int value3 =tail->next->data;
        if(value1 <= value2 && value2 <=value3)
        {
            Node * temp=nxt->next;
            nxt->next=tail->next;
            tail->next=nxt;
            nxt=temp;
        }
        else
        {
            if(tail->next==NULL)
                break;
            else
                tail=tail->next;
        }
    }
    while(nxt!=NULL)
    {
        int value=nxt->data;
        insert(tail,value);
        nxt=nxt->next;
    }    
    return head;
}
int main()
{
    Node *N1 = new Node(1);
    Node *head1 = N1;
    Node *tail1 = N1;
    Node *N2 = new Node(0);
    Node *head2 = N2;
    Node *tail2 = N2;
    insert(tail1, 1);
    insert(tail1, 3);
    insert(tail1, 3);
    insert(tail1, 3);
    insert(tail1, 5);
    insert(tail1, 5);
    insert(tail2, 2);
    insert(tail2, 2);
    insert(tail2, 4);
    insert(tail2, 6);
    insert(tail2, 6);
    insert(tail2, 8);
    insert(tail2, 8);
    display(head1);
    display(head2);
    Node * ans =merge(head1, head2);
    display(ans);
}