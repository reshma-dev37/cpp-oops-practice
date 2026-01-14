//First non-repeating character
#include<iostream>
using namespace std;

char removeFirstNonRepeating(char *str)
{
    char freq[256]= {};
    for(int i=0;str[i]!='\0';i++)
    {
       freq[str[i]]++;
    }
    for(int j=0;str[j]!='\0';j++)
    {
        if(freq[str[j]]==1)
        {
            return str[j];
        }
    }
    return '\0' ;
}
int main()
{
    char str[] = "aabbcdddec";
    cout<<removeFirstNonRepeating(str)<<endl;
}
