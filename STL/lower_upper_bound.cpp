#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>vect = { 10,0,-3,10,20,30,10};
    cout<<"size of vector is :"<<vect.size()<<endl;

    cout<<"original vector:"<<endl;
    for(int x:vect)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    sort(vect.begin(),vect.end());
    cout<<"After sorting vector elements are:"<<endl;
    for(int x:vect)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int value;
    cout<<"Enter a value :"<<endl;
    cin>>value;
    auto lb = lower_bound(vect.begin(),vect.end(),value);
    auto ub = upper_bound(vect.begin(),vect.end(),value);
    int count = ub-lb;
    cout<<"Number of occurence is:"<<count<<endl;
    return 0;
}
