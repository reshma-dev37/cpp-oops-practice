#include<iostream>
#include<set>
using namespace std;

void intersectionArrayusingSet(int *arr1,int n1,int *arr2,int n2)
{
    set<int>se1;
    for(int i=0;i<n1;i++)
    {
        se1.insert(arr1[i]);
    }
    set<int>se2;
    for(int j=0;j<n2;j++)
    {
        if(se1.find(arr2[j])!=se1.end())
        {
            se2.insert(arr2[j]);
        }
    }
    for(int x:se2)
    {
        cout<<x<<" ";
    }
}
int main()
{
    int arr1[]={1,2,2,1,3};
    int arr2[]={2,2,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    intersectionArrayusingSet(arr1,n1,arr2,n2);
    return 0;
}
