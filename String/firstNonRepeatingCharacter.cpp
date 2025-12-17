//This program finds the first non-repeating character in a given string.
//Used nested for loop.
//The outer loop picks one character at a time.
//The inner loop counts how many times that character appears in the entire string.
//If the count of a character is exactly 1, it is the first non-repeating character, and the function immediately returns it.
//If no such character exists, the function returns the null character '\0'.

#include<iostream>
using namespace std;

char firstNonRepeatingChar(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        int count =0;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            return str[i];
        }
    }
    return '\0';
}
int main()
{
    char str[] = "aabbccddef";
    char firstChar = firstNonRepeatingChar(str); 
    cout<<"First Non Repeating character: "<<firstChar<<endl;
    return 0;

}
