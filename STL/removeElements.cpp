//Remove all even numbers from a vector<int> using STL.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v= {2,1,4,3,7,6,8,10,12,11,13,15};
    cout<<"Size of vector."<<v.size()<<endl;
    cout<<"Vector Elements ."<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    remove_if(v.begin(),v.end(),[](int x){return x%2==0;});
    cout<<"vector elements are ."<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
