//strcpy() - used to copy one string to another.
#include<iostream>
using namespace std;

void copySourceToDestination(const char *src)
{
    //Find length of src string
    const char *s = src;

    int len =0;
    while(*s!='\0')
    {
        len++;
        s++;
    }
    cout<<"Length of source string :"<<len<<endl;

    //Allocate memory to destn=ination string .
    char *dest = new char[len+1];
    s = src;
    int i=0;
    while(*s!='\0')
    {
       dest[i]= *s;
       i++;
       s++;
    }
    dest[i]='\0';
    cout<<"Source string is:"<<src<<endl;
    cout<<"Destination string is:"<<dest<<endl;
    //deallocate memory
    delete[] dest;
}
int main()
{
    const char *str = "Good Morning";
    copySourceToDestination(str);
}
