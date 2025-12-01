#include<iostream>
#include<array>
#include<set>
using namespace std;

int main()
{
    array<int,6> arr1 = { 10,30,50,70,90,20};
    array<int,6> arr2 = { 20,50,30,60,80,40};

    set<int> se(arr1.begin(),arr1.end()); //Insert of all arr1
    for(int x: se)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x: arr2)
    {
        se.insert(x); //Insert arr2 elements.
    }
    cout<<"Union of two arrays :"<<endl;
    for(int val:se)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
