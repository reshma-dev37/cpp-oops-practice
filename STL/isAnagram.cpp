//check if the lengths of both strings are equal.
//Then sort both strings using STL sort().
//If the sorted strings are equal, they are anagrams.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


bool isAnagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
       return false;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return str1==str2;
}
int main()
{
    string s1="silent";
    string s2 = "listen";
    if(isAnagram)
    cout<<"Two strings are anagrams"<<endl;
    else
    cout<<"Strings are not anagrams"<<endl;
    return 0;
}
