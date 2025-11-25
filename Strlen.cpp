//strlen - returns the length of string.
#include<iostream>
using namespace std;

void lengthOfStringArrayIndex(const char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    cout<<"Length of string is:"<<i<<endl;
}

int lengthOfStringPointer(const char *str)
{
    const char *ptr = str;
    int count =0;
    while(*ptr !='\0')
    {
        count++;
        ptr++;
    }
    return count;
}

int main()
{
    //strlen
    const char *str = "Hello!";
    int length = strlen(str);
    cout<<"Length of string using strlen:"<<length<<endl;
    //length using array index
    lengthOfStringArrayIndex(str);

    //length using pointer arithemetic
    cout<<"Length of string using Pointer:"<<lengthOfStringPointer(str)<<endl;


}
