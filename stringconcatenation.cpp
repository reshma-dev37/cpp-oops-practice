#include<iostream>
using namespace std;

void concatenation(const char *str1,const char *str2)
{
    const char *temp1 = str1;
    const char *temp2 = str2;
    int len1 =0,len2=0;

    while(*temp1!='\0')
    {
        len1++;
        temp1++;
    }
    cout<<"Length of string1 is:"<<len1<<endl;

    while(*temp2!='\0')
    {
        len2++;
        temp2++;
    }
    cout<<"Length of string1 is:"<<len2<<endl;
    int len = len1+len2;
     char *str3 = new char[len+1];
    int i=0;
    while(*str1!='\0')
    {
        str3[i] =*str1;
        i++;
        str1++;
    }

    while(*str2!='\0')
    {
        str3[i]= *str2;
        i++;
        str2++;
    }
    str3[i] ='\0';
    cout<<"String 3 is :"<<str3<<endl;
    delete[] str3;

}
int main()
{
    const char *str1 = "Hello";
    const char *str2 = "World";
    concatenation(str1,str2);
}
