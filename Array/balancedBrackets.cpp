//I used a stack to check for balanced parentheses.
//While traversing the string, I push opening brackets onto the stack.
//For each closing bracket, I check whether the stack is empty and whether the top element matches the corresponding opening bracket.
//At the end, if the stack is empty, the string is balanced.

#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s)
{
    stack<char>st;
    for(char ch:s)
    {
        if(ch=='('||ch=='{'||ch=='[')
         st.push(ch);
        else if(ch==')'||ch=='}'||ch==']')
        {
            if(st.empty())
             return false;
            char top= st.top();
            st.pop();
           if((ch==')'&&top!='(')||(ch=='}'&& top!='{')||(ch=='['&&top!=']'))
           {
               return false;
           }
        }
    }
    return st.empty();
}
int main()
{
    string s= "{([])}";
    if(isBalanced(s))
    cout<<"Balanced"<<endl;
    else
    cout<<"Not Balanced"<<endl;
    return 0;
}
