#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<pair<int,int>> v = {{10,20},{5,4},{2,1},{200,100}};

   cout<<"Displaying vector elements:"<<endl;
   for(auto p :v)
   {
    cout<<p.first<<" "<<p.second<<endl;
   }
   
   sort(v.begin(),v.end(),[](auto x, auto y){return x.first>y.first;});
   cout<<"Vector elements after sorting :"<<endl;
   for(auto val:v)
   {
    cout<<val.first<<" "<<val.second<<endl;
   }
}
