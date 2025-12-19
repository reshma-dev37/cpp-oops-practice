#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> intersectionOfVector(vector<int>v1,vector<int>v2)
{
    unordered_map<int,int>freq;
    vector<int> result;
    for(int x:v1)
    {
        freq[x]++;
    }
    for(int y:v2)
    {
        if(freq[y]>0)
        {
            result.push_back(y);
            freq[y]--;
        }
    }
    return result;
}
int main()
{
    vector<int>v1={1,2,2,1};
    vector<int>v2= {2,2};
    vector<int> output = intersectionOfVector(v1,v2);
    for(int x:output)
    {
        cout<<x<<" ";
    }
    return 0;
}
