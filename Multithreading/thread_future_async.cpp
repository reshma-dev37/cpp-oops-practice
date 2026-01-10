/* Future - represents a value that will be available in the future.
can wait for  a value.
can retrive a result once .
async - way to start a start and get a future.
*/

#include<iostream>
#include<future>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int main()
{
   future<int> ft = std::async(launch::async,sum,8,3);
   cout<<"Waiting for the result....."<<endl;
   cout<<"Result is :"<<ft.get()<<endl;
}
