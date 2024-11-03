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
bool checkLoop(Node * head)//floy's cycle detection
{
    Node * slow=head;
    Node * fast=head;
    while(fast!=NULL && slow!=NULL)
    {
        slow=slow->next;
        if (fast!=NULL)
            fast=fast->next->next;
        if(slow==fast)
            return true;
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
