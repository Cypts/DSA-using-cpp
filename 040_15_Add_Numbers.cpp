#include<iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node * next;
    Node(int data)
    {
        this -> data =data;
        this -> next= NULL;
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
Node * add(Node* head1,Node * head2)
{
    Node* rev1=reverse(head1);
    Node * head=rev1;
    Node* rev2=reverse(head2);
    int carry=0;
    while(rev1!=NULL && rev2!=NULL)
    {
        int element=rev1->data+rev2->data+carry;
        if(element>9){
            carry=element/10;
            element=element%10;
        }
        else 
            carry=0;
        rev1->data=element;
        rev1=rev1->next;
        rev2=rev2->next;
    }
    head1=reverse(head);
    return head1;
}
int main()
{
    Node * N1=new Node(1);
    Node * N2 =new Node(2);
    Node * head1 =N1;
    Node * head2=N2;
    Node * tail1=N1;
    Node * tail2=N2;
    insert(tail1,2);
    insert(tail2,3);
    insert(tail1,9);
    display(head1);
    display(head2);
    Node* ans=add(head1,head2);
    display(ans);
    display(head1);
    display(head2);
}