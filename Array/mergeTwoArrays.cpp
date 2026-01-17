#include<iostream>
using namespace std;

void mergeArray(int *arr1,int *arr2,int size1,int size2)
{
    int size = size1 + size2;
    int *mergedArray = new int[size];

    int i=0,j=0,k=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
         mergedArray[k++] = arr1[i++];
        else
        mergedArray[k++] = arr2[j++];
    }

    while(i<size1)
    mergedArray[k++] = arr1[i++];
    while(j<size2)
    mergedArray[k++] = arr2[j++];

    cout<<"Merge Two Arrays:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<mergedArray[i]<<" ";
    }
}
int main()
{
    int arr1[] = {1,3,5,7,9,11};
    int arr2[] = {2,4,6,8,10,12};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    mergeArray(arr1,arr2,size1,size2);
}
