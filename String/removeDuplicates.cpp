//Remove Duplicate characters.
#include<iostream>
using namespace std;

void removeDuplicates(char *str)
{
    int newSize = strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<newSize;k++)
                {
                    str[k]=str[k+1];
                }
                newSize--;
                j--;
            }
        }
    }
        cout<<str<<endl;
}
int main()
{
    char str[] = "inline";
    removeDuplicates(str);
}
