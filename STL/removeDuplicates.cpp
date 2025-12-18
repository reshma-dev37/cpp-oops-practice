#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main()
{
    vector<int> v= {1,2,3,2,4,1,5};
    cout<<"size of vector is:"<<v.size()<<endl;
    cout<<"Vector Elements :"<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    unordered_set<int>um;
    vector<int>result;
    for(int x:v)
    {
        if(um.find(x)==um.end())
        {
            um.insert(x);
            result.push_back(x);
        }
    }
    cout<<endl;
    cout<<"Vector Elements are:"<<endl;
    for(int y:result)
    {
        cout<<y<<" ";
    }
    cout<<endl;
    return 0;
}
