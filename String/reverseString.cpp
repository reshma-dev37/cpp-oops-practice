//This program demonstrates how to reverse a string using the two-pointer approach.
//start initialized to the beginning of the string (index 0).
//end initialized to the last character of the string.
//First, traverse the string to find the length and position the end pointer at the last valid character.
//while start<end.
//Swap the characters at start and end using a temporary variable
//Increment the start pointer
//Decrement the end pointer.

#include<iostream>
using namespace std;

void reverseString(char *str)
{
    int start =0;
    int end =0;
    while(str[end]!='\0')
    {
        end++;
    }
    end--;//to point last character.
    while(start<end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] =temp;
        start++;
        end--;
    }
}
int main()
{
    char str[] = "Good";
    reverseString(str);
    cout<<"Reversed string is."<<str<<endl;
    return 0;
}
