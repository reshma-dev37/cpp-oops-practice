#include<iostream>
using namespace std;
void stringcomparision(const char *str1,const char *str2)
{
    //find length of both strings
    const char *temp1 = str1;
    const char *temp2 = str2;
    int len1 =0,len2=0;
    while(*temp1!='\0')
    {
        len1++;
        temp1++;
    }
    cout<<"Length of string1 is :"<<len1<<endl;
     while(*temp2!='\0')
     {
        len2++;
        temp2++;
     }
     cout<<"Length of string2:"<<len2<<endl;
     
     if(len1==len2)
     {
        cout<<"Both strings have same length:"<<endl;
     }
     else
     {
        cout<<"Length is different:"<<endl;
     }

     while(*str1!='\0' && *str2!='\0')
     {
        if(*str1 > *str2)
        {
            cout<<"String1 is greater than string2:"<<endl;
            return;
        }
        else if(*str1<*str2)
        {
            cout<<"String2 is greater than string1:"<<endl;
            return;
        }
    
        str1++;
        str2++;
     }

     if(len1==len2)
     {
        cout<<"Both strings are equal:"<<endl;
     }
     else if(len1>len2)
     {
        cout<<"String1 greater than string2:"<<endl;
     }
     else
     { 
        cout<<"String2 is greater than string1:"<<endl;
     }
}
int main()
{
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    stringcomparision(str1,str2);

}
