#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

char findnonrepeatingcharacter(string str)
{
    unordered_map<char,int>freq;
    for(char c:str)
    {
        freq[c]++;
    }
    for(char x:str)
    {
        if(freq[x]==1)
        {
            return x;
        }
    }
    return '\0';
}
int main()
{
    string str="aabbccdfef";
    char ch = findnonrepeatingcharacter(str);
    if(ch!='\0')
    {
        cout<<"First Non repeating character is:"<<ch<<endl;
    }
    else
    {
        cout<<"There is no non-repearting character exists!!"<<endl;
    }
    return 0;
}
