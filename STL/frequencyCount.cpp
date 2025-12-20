//Count frequency of each word in a sentence using STL.
#include<iostream>
#include<map>
#include<sstream>
using namespace std;

void findFrequencyOfEachWord(string str)
{
    map<string,int> freq;
    string word;
    stringstream iss(str);
    while(iss>>word)
    {
        freq[word]++;
    }
    for(auto pair : freq)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
int main()
{
    string str = "this is a test this is";
    findFrequencyOfEachWord(str);
    return 0;
}
