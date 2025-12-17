//✔️ Logic is for sorted arrays.
//I compared each array element with its expected value i + 1.
//If they differ, that index indicates the missing number.

#include<iostream>
using namespace std;

int findMissingNumber(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=i+1)
        {
            return i+1;
        }
    }
    return size+1;
}
int main()
{
    int arr[] = {1,2,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = findMissingNumber(arr,size);
    cout<<"Missed Number is."<<num<<endl;
    return 0;
}
