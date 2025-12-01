#include<iostream>
#include<algorithm>
using namespace std;

bool smallest(int a,int b)
{
    return a<b;
}
bool largest(int a,int b)
{
    return a>b;
}
int main()
{
    int v[] = {10,200,-9,0,10,27};
    int size = sizeof(v)/sizeof(v[0]);
    cout<<"size :"<<size<<endl;
    int k = 3;

    nth_element(v,v+k-1,v+size,smallest);
    cout<<k<<"Smallest Element :"<<v[k-1]<<endl;

    cout << "Array after (smallest): ";
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int j=1;
    nth_element(v,v+j-1,v+size,largest);
    cout<<j<<"largest Element :"<<v[j-1]<<endl;
    cout << "Array after (largest): ";
    for(int x:v)
    {
        cout<<x<<" ";
    }
  return 0;
}
