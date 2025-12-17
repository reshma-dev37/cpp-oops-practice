#include<iostream>
using namespace std;

void moveZeroesToEnd(int *arr,int size)
{
    int index =0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
           arr[index++] = arr[i]; 
        }
    }
    while(index<size)
    {
        arr[index++]= 0;
    }
}
int main()
{
    int arr[] = {1,0,3,12,0,3,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    moveZeroesEnd(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
  return 0;
}
