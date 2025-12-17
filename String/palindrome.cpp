//I used a two-pointer approach to check whether the string is a palindrome.
//One pointer starts from the beginning of the string and the other from the end.
//I compare characters at both pointers; if they are not equal, I return false immediately.
//If all character pairs match, the string is a palindrome.

#include<iostream>
using namespace std;

bool isPalindrome(char *str)
{
    int start =0;
    int end = 0;
    while(str[end]!='\0')
    {
        end++;
    }
    end--; //point to last character.
    while(start<end)
    {
        if(str[start]!=str[end])
           return false;
        start++;
        end--;
    }
    return true;
}

int main()
{
    char str[] = "madam";
    bool result = isPalindrome(str);
    if(result)
    {
        cout<<"Given string is palindrome."<<endl;
    }
    else
    {
        cout<<"Given string is not a palindrome."<<endl;
    }
    return 0;
}
