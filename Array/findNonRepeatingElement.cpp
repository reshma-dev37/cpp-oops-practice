#include<iostream>
#include<unordered_map>
using namespace std;

int findNonRepeatingElement(int *arr,int size)
{
    unordered_map<int,int>freqCount;
    for(int i=0;i<size;i++)
    {
        freqCount[arr[i]]++;
    }
    for(int i=0;i<size;i++ )
    {
        if(freqCount[arr[i]]==1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4,1,2,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = findNonRepeatingElement(arr,size);
    cout<<"Non Repeating Element is:"<<num<<endl;
    return 0;
}
