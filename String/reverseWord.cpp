/* Reverse words in a sentence
Input: I work on Automotive Audio
*/
#include<iostream>
using namespace std;

void swapWords(string &str,int start,int end)
{
    while(start<end)
    {
        char temp = str[start];
        str[start] =str[end];
        str[end]= temp;
        start++;
        end--;
    }
}

void reverseWords(string &str)
{
    int n = str.length();
    swapWords(str,0,n-1);

    int start =0;
    for(int end =0;end<=n;end++)
    {
        if(end == n || str[end] == ' ')
        {
            swapWords(str,start,end);
            start = end+1;
        }
    }

}
int main()
{
    string str = " I work on Automotive Audio";
    reverseWords(str);
    cout<<"Reversed Word :"<<str<<endl;
}
