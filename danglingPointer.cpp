#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = new int;
    cout<<"Before deletion :"<<*ptr<<" "<<ptr<<endl;

    delete ptr;
    ptr = nullptr;//By assigning the pointer to nullptr, we can  avoid the dangling pointer issue.
    cout<<"After deletion :"<<ptr<<endl;
    return 0;      
}
