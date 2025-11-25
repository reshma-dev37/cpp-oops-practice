//DoublePointer ->stores the address of pointer variable.
#include<iostream>
using namespace std;

int main()
{
    //normal variable
    int x=10;
    cout<<"value of x is:"<<x<<endl;
    cout<<"Address of x is :"<<&x<<endl;
    cout<<"---------------------"<<endl;
  
    //pointer variable
    int *ptr = &x;
    cout<<"Pointer address:"<<&ptr<<endl;
    cout<<"Value stored at memory location pointed by pointer:"<<*ptr<<endl;
    cout<<"Pointer stored address:"<<ptr<<endl;
    cout<<"---------------------"<<endl;
  
    //double pointer
    int **dptr = &ptr;
    cout<<"Double pointer address :"<<&dptr<<endl;
    cout<<"value stored by double pointer:"<<**dptr<<endl;
    cout<<"Double pointer stored address:"<<dptr<<endl;
    cout<<"---------------------"<<endl;

    return 0;

}
