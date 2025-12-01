#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v= {2,0,10,5,10,2,10,0,3};
    cout<<"size of vector is :"<<v.size()<<endl;
    int value = 5;
    int countOccurrence = count(v.begin(),v.end(),value);
    cout<<"Total number is:"<<countOccurrence<<endl;
    return 0;
}
