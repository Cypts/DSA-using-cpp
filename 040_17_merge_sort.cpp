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
Node *middle(Node *head,Node * tail) {
    if (head == NULL || head->next == NULL) return head;
    if(head==tail) return head;
    Node *slow = head;
    Node *fast = head;
    
    while (fast != tail && fast->next != tail) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
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
Node *sort(Node *head, Node *tail) {
    if (head == NULL || head == tail) return head;
    
    Node *mid = middle(head, tail);
    Node *headOne = head;
    Node *headTwo = mid->next;
    mid->next = NULL; // Split the list into two halves
    
    headOne = sort(headOne, mid);
    headTwo = sort(headTwo, tail);
    
    return merge(headOne, headTwo);
}
int main()
{
    Node * N1=new Node(5);
    Node * head =N1;
    Node * tail=N1;
    insert(tail,9);
    insert(tail,2);
    insert(tail,4);
    insert(tail,7);
    insert(tail,6);
    insert(tail,1);
    insert(tail,3);
    display(head);
    Node * ans=sort(head,tail);
    display(ans);
}