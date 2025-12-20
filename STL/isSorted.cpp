#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v= {2,6,1,8,2,8,10,-1,2,0,14,12};
    cout<<"size:"<<v.size()<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    bool result = is_sorted(v.begin(),v.end());
    cout<<"vector is sorted or not."<<result<<endl;
    sort(v.begin(),v.end());
    result = is_sorted(v.begin(),v.end());
    cout<<"Vector after sorting!!:"<<result<<endl;
     return 0;
}
