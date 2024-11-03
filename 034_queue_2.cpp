#include<iostream>
using namespace std;
class queue{
    public:
        int *array;
        int size;
        int front;
        int rear;
    queue(int size)
    {
        this -> size=size;
        array=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int element)
    {
        if(rear==size&&front==0)
            cout<<"/nQueue is full";
        else if(rear==size&&front!=0)
        {
            
        }
        else
        {
            rear++;
            array[rear]=element;
        }
    }
    void dequeue()
    {
        if(rear==front)
            cout<<"\nQueue is empty";
        else{
            front++;
            if(rear==front)
            {
                front=0;
                rear=0;
            }
        }
    }
    bool isEmpty()
    {
        if(rear==front)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(rear==size)
            return true;
        else
            return false;
    }
    int first()
    {
        if(front==rear)
            return -1;
        else
            return array[front];
    }
};
int main()
{
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    cout<<"Front is "<<q.first();
    q.dequeue();
    cout<<"\nis empty "<<q.isEmpty();
    cout<<"\nFront is "<<q.first();
    q.dequeue();
    cout<<"\nFront is "<<q.first();
    cout<<"\nis empty= "<<q.isEmpty();

}