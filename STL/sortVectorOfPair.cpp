//Sort a vector of pairs by
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v = {{1,3},{2,2},{4,3},{3,2}};
    sort(v.begin(),v.end(),[](const pair<int,int>&a,const pair<int,int>&b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second >b.second;
    });
    for(auto &p:v)
    {
        cout<<p.second<<" "<<p.first<<endl;
    }
    return 0;
}
