#include<iostream>
using namespace std;

int findPeakValue(int *arr,int size)
{
    int start =0;
    int end = size-1;
    while(start<end)
    {
    int mid = start+(end-start)/2;
    if(arr[mid]<arr[mid+1])
    {
        start = mid+1;
    }
    else
    {
        end = mid;
    }
    }
    return arr[start];
}
int main()
{
    int arr[] = {1,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int peakValue = findPeakValue(arr,size);
    cout<<"Peak value is."<<peakValue<<endl;
}
