//I used an unordered map to store the frequency of elements from the first array.
//Then I iterated through the second array and checked if the element exists in the map with a positive count.
//If it does, I print the element and decrement its count to correctly handle duplicates.

#include<iostream>
#include<unordered_map>
using namespace std;

void intersection(int *arr1,int n1,int *arr2,int n2)
{
    unordered_map<int,int> freq;
    for(int i=0;i<n1;i++)
    {
        freq[arr1[i]]++;
    }
    for(int i=0;i<n2;i++)
    {
        if(freq[arr2[i]]>0)
        {
            cout<<arr2[i]<<" ";
            freq[arr2[i]]--;
        }
    }
}
int main()
{
    int arr1[]={1,2,2,1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {2,2};
    int n2= sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,n1,arr2,n2);
    return 0;
}
