#include<iostream>
using namespace std;

int main()
{
    int arr[]= {20,50,70,100,106,200};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is:"<<size<<endl;

    int *ptr= arr;
    for(int i=0;i<size;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    return 0;
}
