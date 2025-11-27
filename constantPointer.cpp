#include<iostream>
using namespace std;

int main()
{
    //pointer to constant. -value  is constant but pointer can point to different locations.
    int x=10;
    int y=20;
    const int*ptr = &x;
    ptr =&y;
   // *ptr =30; //*ptr -read -only variable
    
    //constant pointer - value can be change , but pointer cannot point to any other location.
    int* const ptr1 = &y;
    *ptr1= 50;
   // ptr1 = nullptr;//cannot change pointer address
    
    //constant pointer to constant. - both value and pointer location.
    const int* const ptr2 = &x;
   // *ptr2=10; //cannot modify value
   // ptr2 = nullptr;//cannot change pointer address.
    
}
