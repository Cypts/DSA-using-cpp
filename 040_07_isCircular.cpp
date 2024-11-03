#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data )
    {
        this -> data= data ;
        this -> next =NULL;
    }
};
bool isCircular(Node * head)
{
    Node * temp =head;
    while(head!= NULL)
    {
        head=head->next;
        if(temp==head)
            return true;
    }
    return false;
}
void Inserttail(int data, Node * & tail)
{
    Node * temp = new Node(data);
    tail->next=temp;
    tail=temp;
}
void insert(Node * & tail, int data)
{
    Node * temp= new Node(data);
    temp->next=tail-> next;
    tail->next=temp;
    tail= temp;
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
    Node * n1= new Node (1);
    Node * n2=new Node(77);
    Node * tail2=n2;
    Node * head=n2;
    Inserttail(32,tail2);
    Inserttail(34,tail2);
    Inserttail(37,tail2);
    Node * tail =n1;
    tail-> next =n1;
    insert(tail,2);
    insert(tail,3);
    insert(tail,4);
    insert(tail,5);
    cout<<isCircular(tail);

}