#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isVectorSorted(vector<int>&v)
{
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<v[i-1])
           return false;
    }
    return true;
}
int main()
{
    vector<int> v= {2,11,0,-1,20,7,4,9};
    if(isVectorSorted(v))
    {
        cout<<"Given vector is in sorted order!!"<<endl;
    }
    else
    {
        cout<<"Vector is not in sorted order!!"<<endl;
    }
    return 0;
    
}
