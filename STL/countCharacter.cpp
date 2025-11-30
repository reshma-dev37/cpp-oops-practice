//Count character frequencies in a string using unordered_map
//unordered_map stores data as a key value pair , where key = character and value = count of occurrences.
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string:"<<endl;
    getline(cin,s);
    
    unordered_map<char,int> freq;
    for(char c:s)
    {
        freq[c]++;
    }
    cout<<"Character frequencies:"<<endl;
    for(pair<char,int> p: freq)
    {
         cout<<p.first<<" "<<p.second<<endl; 
    }
   return 0;
}
