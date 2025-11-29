#ifndef QUEUE_IMPL_H
#define QUEUE_IMPL_H

#define SIZE 5
class Queue
{
    public:
    int front,rear;
    int QueueArray[SIZE];
    Queue(){front =-1;
    rear =-1;}
    void Enqueue(int value);
    void Dequeue();
    void Display();
    void peek();
};

#endif
