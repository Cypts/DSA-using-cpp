#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * prev;
    Node * next;
    Node(int data)
    {
        this -> data = data;
        this-> next=NULL;
        this-> prev=NULL;
    }
    ~Node()
    {
        if(next!=NULL)
        {
            next=NULL;
            delete next;
        }
    }
};
void InsertHead(Node * &head,int data)
{
    Node * temp= new Node(data);
    temp-> next= head;
    head->prev=temp;
    head = temp;
}
void InsertTail(Node * & tail,int data)
{
    Node * temp= new Node(data);
    tail-> next=temp;
    temp-> prev=tail;
    tail=temp;
}
void InsertMiddle(Node * & head,Node * & tail,int data,int pos)
{
    if(pos==1)
    {
        InsertHead(head,data);
        return;
    }
    int curr=1;
    Node * temp= head;
    Node * NewNode= new Node(data);
    while(curr!=pos-1)
    {
        curr++;
        temp=temp->next;
    }
    NewNode->next=temp->next;
    temp->next=NewNode;
    if(NewNode->next==NULL)
    {
        tail=NewNode;
    } 
}
void DeleteNode(Node * & head,Node * & tail,int pos)
{
    Node * temp=head;
    if(pos==1)
    {
        head=head->next;
        head->prev=NULL;   
        delete temp;
        return;
    }
    int crr=1;
    Node * pre=NULL;
    while(crr!=pos)
    {
        pre=temp;
        temp=temp->next;
        crr++;
    }
    if(temp->next==NULL)
        tail=pre;
    temp->prev=NULL;
    pre->next=temp->next;
    temp->next=NULL;
    delete temp;
}
void display(Node * & head)
{
    Node * temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node * node1 = new Node(6);
    Node * head =node1;
    Node * tail = node1;
    InsertHead(head,5);
    InsertTail(tail,7);
    InsertMiddle(head,tail,8,4);
    display(head);
  
    DeleteNode(head,tail,4);
    
    display(head);
    cout<<"Head "<<head<<" Tail="<<tail<<endl;

    
}