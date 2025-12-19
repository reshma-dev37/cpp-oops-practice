// Given a std::vector<int>, find the element that appears only once while all others appear twice.
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void findnonrepeatingelement(const vector<int> &v)
{
    unordered_map<int,int>freq;
    for(int i=0;i<v.size();i++){
        freq[v[i]]++;
    }
    for(int i=0;i<v.size();i++)
    {
        if(freq[v[i]] ==1)
        {
            cout<<v[i];
            return;
        }
    }
}
int main()
{
    vector<int> v = {4,1,2,1,2};
    cout<<"Vector size :"<<v.size()<<endl;
    findnonrepeatingelement(v);
    return 0;
}
