#include<iostream>
#include<array>
#include<set>
using namespace std;

int main()
{
    array<int,6>arr1 = {10,20,50,70,30,80};
    array<int,6> arr2 = { 20,40,80,60,100,120};

    set<int> se(arr1.begin(),arr1.end());
    set<int>intersection;

    for(int i :arr2)
    {
        if(se.find(i)!=se.end())
        {
            intersection.insert(i);
        }
    }
    cout<<"Intersection of two arrays:"<<endl;
    for(int i:intersection)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
