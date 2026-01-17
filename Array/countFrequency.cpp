#include<iostream>
using namespace std;

void findFrequency(int *arr,int size)
{
    int freq[100] = {0};//assuming max 100;
    for(int i=0;i<size;i++)
    {
        freq[arr[i]]++;
    }
    for(int j=0;j<=100;j++)
    {
        if(freq[j]>0)
        {
            cout<<"Frequency :"<<j<<"->"<<freq[j]<<endl;
        }
    }
}
int main()
{
    int arr[] = {2,3,4,3,2,6,8,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    findFrequency(arr,size);
}
