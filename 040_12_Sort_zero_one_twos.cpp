#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data)
    {
        this -> data =data;
        this -> next=NULL;
    }
};
void insert(Node * & head,Node * & tail,int data)
{
    if(head==NULL)
    {
        Node * temp= new Node(data);
        head=temp;
        tail=temp;
        return;
    }
    Node * temp= new Node(data);
    tail-> next =temp;
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
Node *Sort012(Node * &head)
{
    Node * Zero=NULL;
    Node * headZero= Zero;
    Node * tailzero=Zero;
    Node * One=NULL;
    Node * headOne= One;
    Node * tailOne=One;
    Node * Two=NULL;
    Node * headTwo=Two;
    Node * tailTwo=Two;
    Node * temp= head;
    while ( temp!=NULL)
    {
        int value=temp->data;
        if( value==0)
        {
            insert(headZero,tailzero,0);
        }
        else if( value==1)
        {
            insert(headOne,tailOne,1);
        }
        else if( value==2)
        {
            insert(headTwo,tailTwo,2);
        }
        temp=temp->next;
    }
    tailzero->next=headOne;
    tailOne->next=headTwo;
    return headZero;


}
int main()
{
    Node * N1 = new Node(1);
    Node * tail=N1;
    Node * head =N1;
    insert(head,tail,1);
    insert(head,tail,2);
    insert(head,tail,0);
    insert(head,tail,1);
    insert(head,tail,2);
    insert(head,tail,0);
    insert(head,tail,0);
    insert(head,tail,2);
    display(head);
    Node * ans=Sort012(head);
    display(ans);
}