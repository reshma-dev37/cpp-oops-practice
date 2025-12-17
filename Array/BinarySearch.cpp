//Binary search is a efficient way to find target value from the sorted array.
#include<iostream>
using namespace std;

int BinarySearch(int *arr, int size,int target)
{
    int start =0;
    int end = size-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,4,8,10,20,22,26,28,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter target value"<<endl;
    cin>>target;
    int index = BinarySearch(arr,size,target);
    if(index!=-1)
    {
        cout<<"Element found at ."<<index<<endl;
    }
    else
    {
        cout<<"Element not found."<<endl;
    }
}
