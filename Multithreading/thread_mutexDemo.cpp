/*
When two or more threads access the same shared resource concurrently, and at least one thread modifies it, a race condition occurs.
To avoid race conditions, a mutex is used.
A mutex (mutual exclusion) is a synchronization mechanism that protects shared resources by allowing only one thread to enter the critical section at a time.
The mutex is locked before accessing or modifying the shared resource and unlocked after the operation is completed.

To ensure safe and automatic unlocking (even in case of exceptions). std::lock_guard is used,releases the lock automatically when it goes out of scope.
*/

#include<iostream>
#include<thread>
#include<vector>
#include<mutex>
using namespace std;

vector<int> v;
const int SIZE = 100;

mutex mtx;
void pushValuesFromOne()
{
    for(int i=0;i<SIZE;i++)
    {
        std::lock_guard<mutex> lock(mtx);
        v.push_back(i);
    }
}

void pushValuesFromTwo()
{
    for(int i=0;i<SIZE;i++)
    {
        std::lock_guard<mutex> lock(mtx);
        v.push_back(i);
    }
}

int main()
{
    thread t1(pushValuesFromOne);
    thread t2(pushValuesFromTwo);

    cout<<"Main thread starts execution!!"<<endl;
    t1.join();
    t2.join();
    cout<<"Total size is:"<<v.size()<<endl;
    cout<<"Main thread execution completed!!"<<endl;
}
