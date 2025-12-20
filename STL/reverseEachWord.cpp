//Reverse each word in a string using STL.
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
    string str = "Hello  World Cpp";
    string word;
    stringstream iss(str);
    while(iss >> word)
    {
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
    return 0;
}
