#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node * next=NULL;
    Node(int data)
    {
        this-> data =data ;
        this ->next=next;
    }
};
void insertTail(Node * &tail,int d)
{
    Node * temp= new Node(d);
    tail->next =temp;
    tail=temp;
}
void display(Node * temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool checkLoop(Node * head)
{
    map<Node *, bool > mp;
    Node * temp= head;
    while(head!=NULL)
    {
        if(mp[head]==true)
            return true;
        mp[head]=true;
        head=head->next;
        
    }
    return false;
}
int main()
{
    map<Node *, bool> mp;
    Node* N1=new Node(1);
    Node * tail =N1;
    Node * head= N1;
    Node * temp=N1;
    for (int i =2;i!=5;i++)
        insertTail(tail,i);
    display(head);
    tail->next=N1->next->next;
    cout<<checkLoop(head);
}
