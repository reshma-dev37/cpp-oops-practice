#include<iostream>
#include"CircularQueue.h"
using namespace std;

void CircularQueue::Enqueue(int value)
{
    if((rear+1)%SIZE == front)
    {
        cout<<"Circular Queue is Overflow cannot insert elements:"<<endl;
        return;
    }
    else if(front ==-1 && rear ==-1)
    {
        front = rear =0;
        QueueArray[rear] = value;
        cout<<"First Element is inserted :"<<QueueArray[rear]<<endl;
    }
    else
    {
        rear = (rear +1 )% SIZE;
        QueueArray[rear]= value;
        cout<<"Value inserted:"<<QueueArray[rear]<<endl;
    }
}

void CircularQueue::Dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty:"<<endl;
        return;
    }
    else if(front == rear)
    {
        cout<<"Value deleted :"<<QueueArray[front]<<endl;
        front = rear =-1;
    }
    else
    {
        cout<<"Value deleted :"<<QueueArray[front]<<endl;
        front = ((front+1)%SIZE);
    }
}

void CircularQueue::peek()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Circular Queue is Underflow:"<<endl;
        return;
    }
    else
    {
        cout<<"Front element is :"<<QueueArray[front]<<endl;
    }
}

void CircularQueue::Display()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Circular Queue is empty:"<<endl;
        return ;
    }
    cout<<"Circular Elements are:"<<endl;
    for(int i=front;;i=(i+1)%SIZE)
    {
        cout<<QueueArray[i]<<" ";
        if(i==rear)
        {
            break;
        }
    }
    cout<<endl;
}

int main()
{
    CircularQueue CQ;
    CQ.Enqueue(100);
    CQ.Enqueue(200);
    CQ.Enqueue(300);
    CQ.Display();
    cout<<"----------------"<<endl;
    CQ.Dequeue();
    CQ.Dequeue();
    CQ.peek();
    CQ.Display();
    cout<<"------------------"<<endl;
    CQ.Enqueue(400);
    CQ.Enqueue(500);
    CQ.Enqueue(700);
    CQ.Enqueue(800);
    CQ.Display();
    CQ.Enqueue(800);//Overflow

}
