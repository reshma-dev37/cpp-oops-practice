//Find the second largest distinct element using STL.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    vector<int> v= {4,1,2,2,5};
    cout<<"size."<<v.size()<<endl;
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
    bool isfoundSecond = false;
    
    for(int x:v){
        if(x>firstMax)
        {
            secondMax = firstMax;
            firstMax =x;
            isfoundSecond = true;
        }
        else if(secondMax<x && x!=firstMax)
        {
            secondMax =x;
            isfoundSecond = true;
        }
    }
    if(!isfoundSecond)
    {
        cout<<"there is no second largest element."<<endl;
    }
    else
    {
        cout<<"firstLargest element is."<<firstMax<<endl;
        cout<<"second largest element is."<<secondMax<<endl;
    }
    return 0;
}
