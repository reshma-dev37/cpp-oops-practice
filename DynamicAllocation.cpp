//In c , malloc is used to allocate memory dynamically and free is used to deallocate memory.
//In cpp , new is used to allocate memory dynamically and delete is used to deallocate memory(delete -single variable , and delete[] -array elements).
#include<iostream>
using namespace std;

int main()
{
    //using new keyword to allocate memory dynamically.
    int n;
    cout<<"Enter number of array elements to store:"<<endl;
    cin>>n;
    
    int *arr = new int[n];
    //Take inputs from user.
    cout<<"Taking inputs:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Displaying array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete [] arr;

    //using malloc keyword.

    int *ptr = (int*) malloc(5*sizeof(int));

    if(ptr == NULL)
    {
        cout<<"Memory allocation failed"<<endl;
        return 1;
    }
    cout<<"taking inputs from user:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<endl;
    cout<<"Displaying elements:"<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<*(ptr+j)<<" ";
    }
    cout<<endl;
    free(ptr);

    return 0;
}
