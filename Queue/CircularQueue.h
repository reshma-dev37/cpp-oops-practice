#ifndef CIRCULAR_QUEUE_IMPL_H
#define CIRCULAR_QUEUE_IMPL_H

#define SIZE 5
class CircularQueue
{
    public:
    int front,rear;
    int QueueArray[SIZE];
    CircularQueue(){front =-1;
    rear =-1;}
    void Enqueue(int value);
    void Dequeue();
    void Display();
    void peek();
};

#endif
