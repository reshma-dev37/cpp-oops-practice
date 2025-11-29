//Queue - FIFO , linear data structure where elements can be inserted from one end that is rear and deleted from another end that is front.
#include<iostream>
#include"QueueImpl.h"
using namespace std;

void Queue::Enqueue(int value)
{
    if(rear == SIZE-1)
    {
        cout<<"Queue is overflow , cannot insert elements anymore:"<<endl;
        return;
    }
    else if(front==-1 &&rear==-1)
    {
        front++;
        rear++;
        QueueArray[rear] =value;
        cout<<"First element inserted in the queue:"<<QueueArray[rear]<<endl;
    }
    else
    {
        rear++;
        QueueArray[rear]= value;
        cout<<"Element is inserted into queue:"<<QueueArray[rear]<<endl;
    }
}
void Queue::Dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is underflow no element is present in the queue -Empty:"<<endl;
        return ;
    }
    else if(front ==rear)
    {
        cout<<"Element deleted from queue is :"<<QueueArray[front]<<endl;
        front = rear =-1;
    }
    else{
        cout<<"Element deleted from queue is :"<<QueueArray[front]<<endl;
        front++;
    }
}

void Queue::Display()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Queue is empty : no element present -underflow"<<endl;
        return;
    }
    else 
    {
        cout<<"Elements present in the queue are:"<<endl;
        for(int i=front;i<rear+1;i++)
        {
            cout<<QueueArray[i]<<" ";
        }
        cout<<endl;
    }
}
void Queue::peek()
{
    if(front == -1 && rear==-1)
    {
        cout<<"Queue is empty:"<<endl;
        return;
    }
    else
    {
        cout<<"Front element of queue is:"<<QueueArray[front]<<endl;
    }
}
int main()
{
    Queue Q;
    cout<<"Insert Operation:"<<endl;
    Q.Enqueue(3);
    Q.Enqueue(5);
    Q.Enqueue(7);
    Q.Display();
    cout<<"Delete operation:"<<endl;
    Q.Dequeue();
    Q.Dequeue();
    Q.Display();
    cout<<"To get Front element:"<<endl;
    Q.peek();

}
