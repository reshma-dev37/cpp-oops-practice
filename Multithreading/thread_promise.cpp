/*Promise - used to send a value from one thread to another , using set_value - set the value.
one promise - one future.*/

#include<iostream>
#include<thread>
#include<future>
using namespace std;

void computeSum(promise<int>pms, int a, int b)
{
    pms.set_value(a+b);
}
int main()
{
    promise<int> pms;
    future<int> ft = pms.get_future();
    thread t(computeSum,std::move(pms),10,20);
    cout<<"After thread creation :"<<endl;
    t.join();
    cout<<"Result is:"<<ft.get()<<endl;
    cout<<"End of the program!!!"<<endl;
}
