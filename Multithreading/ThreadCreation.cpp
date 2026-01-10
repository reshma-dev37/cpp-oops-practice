//Multithreading - Mechanism allow the program to execute multiple threads concurrently within the same process.
//Program - Set of instructions to perform a specific task.
//Process - Running instance of a program , has its own virtual memory , and resources.
//Thread - Smallest unit of Execution within a process , which shares memory among the other threads in the same process.
//Join() - Blocks the calling thread(Main thread) , Main thread waits until the child thread completes its execution.
//detach() - Threads runs independently in the background , main thread does not wait.
///joinable - to check whether the thread is in valid state or not. 

#include<iostream>
#include<thread>
using namespace std;

void display()
{
    cout<<"this is display method :"<<endl;
}
void add(int a,int b)
{
    int sum =  a+b;
    cout<<"sum of 2 integers is :"<<sum<<endl;
}
int main()
{
    thread t1(display);
    thread t2(add,2,5);
    cout<<"Main thread paused"<<endl;
    t1.join();
    t2.join();
    cout<<"Main thread starts executed!!"<<endl;
}
