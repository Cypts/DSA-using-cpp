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
void Inserthead(int data , Node * & head)
{
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
void Inserttail(int data, Node * & tail)
{
    Node * temp = new Node(data);
    tail->next=temp;
    tail=temp;
}
void InsetMiddle(int data ,int pos, Node * &head, Node * & tail){
    Node * NewNode= new Node(data);
    if(pos==1)
    {
        Inserthead(data,head);
        return;
    }
    int current=1;
    Node * temp= head;
    while(current!=pos-1)
    {
        temp=temp->next;
        current++;
    }
    if(temp->next==NULL)
    {
        Inserttail(data,tail);
        return;
    }
    NewNode->next=temp->next;
    temp->next=NewNode;
}
void deleteNode(Node * &head,int pos)
{
    if(pos==1)
    {
        Node * temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int currPos=1;
        Node* prev=NULL;
        Node* temp=head;
        while(currPos!=pos)
        {
            prev=temp;
            temp=temp->next;
            currPos++;
        }
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
    }
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
int main()
{
    Node *Node1=new Node(6);
    Node* head= Node1;
    Node* tail= Node1;
    //cout<<"head address before: "<<head<<endl;
    Inserthead(5,head);
    //cout<<"head address after: "<<head<<endl;
    //cout<<"tail address before: "<<tail<<endl;
    //display(head);
    Inserttail(8,tail);
    //cout<<"tail address after: "<<tail<<end;
    InsetMiddle(7,3,head,tail);
    display(head);
    cout<<"head: "<<head->data<<" tail: "<<tail->data<<endl;
    deleteNode(head,3);
    display(head);
    cout<<"head: "<<head->data<<" tail: "<<tail->data;
}    
