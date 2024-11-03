#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data)
    {
        this ->data=data;
        this-> next=NULL;
    }
};
void insert(int data, Node * & tail,int pos)
{
    Node * temp= new Node(data);
    Node * curn=tail;
    int curr=1;
    while(curr!=pos)
    {
        curn=curn->next;
        if(curn==tail)
        {
            temp->next= tail->next;
            tail->next =temp;
            tail=temp;
            return; 
        }
        curr++;
    }
    temp->next=curn->next;
    curn->next=temp;
}
void deleteNode(Node * & tail,int pos)
{
    Node * pre = NULL;
    Node * curr= tail-> next;
    int curn =1;
    while(curn!= pos)
    {
        pre =curr;
        curr=curr->next;
        if(tail==curr)
        {
            pre->next=curr->next;
            curr->next=NULL;
            delete curr;
            tail=pre;
            return;
        }
        curn++;
    }
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;
}
void display(Node * tail)
{
    Node * temp=tail;
    do{
        cout<<temp->next->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}

int main()
{
    Node * N1 = new Node(5);
    Node* tail=N1;
    tail->next=N1;
    cout<<tail<<endl;
    insert(4,tail,1);
    insert(3,tail,1);
    insert(2,tail,1);
    insert(1,tail,1);
    display(tail);
    insert(90,tail,6);
    display(tail);
    cout<<tail<<endl;
    deleteNode(tail,6);
    display(tail);
    cout<<tail<<endl;
}