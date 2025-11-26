//stack is a linear data structure in which elements are inserted and deleted from the same end, called the top of the stack.
//LIFO -last in first out.

#include<iostream>
using namespace std;
#define size 5

class Stack
{
    public:
    int top;
    int arr[size];

    Stack()
    {
        top =-1;
    }
    //push element
    void push(int num)
    {
        if(top == size-1)
        {
            cout<<"Stack is overflow:"<<endl;
            return;
        }
        arr[++top]= num;
        cout<<"Pushed element is:"<<arr[top]<<endl;
    }
    //pop element
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is underflow:"<<endl;
            return -1;
        }
          return arr[top--];
    }
    int peek()
    {
      return arr[top];
    }

    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is empty:"<<endl;
            return;
        }
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int popped = s.pop();
    cout<<"Popped element is:"<<popped<<endl;
    s.push(60);
    int topElement = s.peek();
    cout<<"Top element is:"<<topElement<<endl;

    s.display();
    cout<<"----------------------"<<endl;
    int popped1 = s.pop();
    cout<<"Popped element is:"<<popped1<<endl;
    return 0;

}
