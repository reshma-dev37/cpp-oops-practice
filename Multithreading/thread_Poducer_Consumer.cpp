/* Producer–Consumer Example using std::condition_variable
- Producer thread generates data
- Consumer thread waits until data is available*/

#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

mutex m;
condition_variable cv;
bool isDataReady = false;
int data =0;
void producer()
{
  std::this_thread::sleep_for(std::chrono::microseconds(1));
  unique_lock<mutex> lock(m);
  data = 100;
  isDataReady = true;
  cout<<"Data is Produced: "<<data<<endl;
  cv.notify_one();
}

void consumer()
{
    unique_lock<mutex> lock(m);
    cv.wait(lock,[]{return isDataReady;});
    cout<<"Data is consumed: "<<data<<endl;
}
int main()
{
   thread t1(consumer);
   thread t2(producer);
   t1.join();
   t2.join();
   cout<<"Main thread execution completd!!"<<endl;
}
