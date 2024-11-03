#include<iostream>
#include<map>
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
    map <int,bool> mp;
    Node * temp=head;
    Node * store=NULL;
    while(temp!=NULL)
    {
        if(mp[temp->data]==true)
        {
            store->next=temp->next;
            delete temp;
            temp=store->next;
        }
        else
        {

            mp[temp->data]=true;
            store =temp;
            temp=temp->next;
        }  
               
    }
}

int main()
{
    Node *Node1=new Node(1);
    Node* head= Node1;
    Node* tail= Node1;
    Inserttail(2,tail);
    Inserttail(1,tail);
    Inserttail(2,tail);
    Inserttail(3,tail);
    Inserttail(5,tail);
    Inserttail(3,tail);
    Inserttail(4,tail);
    Inserttail(3,tail);
    Inserttail(3,tail);
    Inserttail(5,tail);
    display(head);
    delSame(head);
    display(head);
    
}    
