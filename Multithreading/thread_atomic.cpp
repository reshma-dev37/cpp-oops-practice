/*
std::atomic provides thread-safe operations on shared variables without requiring explicit locks such as mutexes.
Atomic operations ensure that read, modify, and write happen as a single indivisible operation, preventing race conditions when multiple threads access the same variable concurrently.
std::atomic is typically used to protect a single shared variable when the operations are simple (such as increment, decrement, or fetch_add).
*/

#include<iostream>
#include<thread>
#include<atomic>
using namespace std;

atomic<int> counter;

void incrementCounter()
{
    counter.fetch_add(10);
}
int main()
{
   thread t1(incrementCounter);
   thread t2(incrementCounter);
   t1.join();
   t2.join();
   cout<<"Count value after executing both threads:"<<counter.load()<<endl;
   cout<<"Main thread execution completed!!"<<endl;
}
