/*Character with maximum frequency
I use a frequency array to count occurrences of each character.
Then I traverse the string again to find the character with the maximum frequency.
Traversing the string ensures the first occurring character is returned in case of a tie.*/

#include<iostream>
using namespace std;

char maximumFrequencyCharacters(char *str)
{
    int freq[256] = {};
    for(int i=0;str[i]!='\0';i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    char result = '\0';
    int maximumFrequency = 0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[(unsigned char)str[i]]>maximumFrequency)
        {
            maximumFrequency = freq[str[i]];
            result = str[i];
        }
    }
    return result;
}
int main()
{
    char str[] = "aabbcdecddd";
    cout<<maximumFrequencyCharacters(str)<<endl;
}
