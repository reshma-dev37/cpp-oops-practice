#include<iostream>
#include<vector>
#include<set>
using namespace std;

void intersectionOfVector(vector<int>v1,vector<int>v2)
{
    set<int>se1(v1.begin(),v1.end());
    set<int>se2(v2.begin(),v2.end());
    for(int x:se1)
    {
        if(se2.find(x)!=se2.end())
        {
            cout<<x<<" ";
        }
    }
}
int main()
{
    vector<int> v1={1,2,2,1};
    vector<int> v2= {2,2};
    intersectionVector(v1,v2);
    return 0;
}
