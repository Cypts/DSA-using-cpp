#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this-> data=data;
        this-> next=NULL;
    }
};
void Inserttail(int data, Node * & tail)
{
    Node * temp = new Node(data);
    tail->next=temp;
    tail=temp;
}
void display(Node * & head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void delSame(Node * &head)
{
    Node * temp= head;
    Node * pre= head;
    Node * store=NULL;
    while(temp!=NULL&&temp->next!=NULL)
    {
        if(temp->next->data==temp->data)
        {
            store= temp->next;
            temp->next=store->next;
            delete store;
        }
        else
            temp=temp->next;
        
    }
}
int main()
{
    Node *Node1=new Node(1);
    Node* head= Node1;
    Node* tail= Node1;
    Inserttail(1,tail);
    Inserttail(1,tail);
    Inserttail(2,tail);
    Inserttail(2,tail);
    Inserttail(3,tail);
    Inserttail(3,tail);
    Inserttail(3,tail);
    Inserttail(3,tail);
    Inserttail(5,tail);
    Inserttail(5,tail);
    display(head);
    delSame(head);
    display(head);
    
}    
