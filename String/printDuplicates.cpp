//Print duplicate characters
#include<iostream>
using namespace std;

void printDuplicates(char *str)
{
    char freq[256] = {};
    for(int i=0;str[i]!='\0';i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[(unsigned char)str[i]] >1)
        {
            cout<<str[i]<<" ";
            freq[(unsigned char)str[i]] =0;
        }
    }
}
int main()
{
    char str[] = "inline";
    printDuplicates(str);
}
