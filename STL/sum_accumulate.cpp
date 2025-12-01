#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1= {2,4,6,8,10};
    cout<<"size of vector is:"<<v1.size()<<endl;
    int sum =0;
    sum = accumulate(v1.begin(),v1.end(),0);
    cout<<"total sum is:"<<sum<<endl;
    return 0;
}
