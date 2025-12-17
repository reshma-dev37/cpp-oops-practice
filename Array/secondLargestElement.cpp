//secondLargestElement.
//In this program, we use two variables firstLargest and secondLargest, both initialized to INT_MIN to handle negative values in the array.
 //Iterate through the array from index 0 to size - 1. 
//If the current element is greater than firstLargest, we update secondLargest with the old value of firstLargest, and then update firstLargest with the current element.
//Else if the current element is smaller than firstLargest but greater than secondLargest, and not equal to firstLargest, we update secondLargest with the current element.
//After traversal, if secondLargest is still INT_MIN, it means there is no valid second largest element in the array.

#include<iostream>
#include<climits>
using namespace std;

void secondLargestElement(int *arr,int size)
{
 int firstLargest = INT_MIN;
 int secondLargest = INT_MIN;
 
 for(int i=0;i<size;i++)
 {
     if(arr[i]>firstLargest)
     {
         secondLargest = firstLargest;
         firstLargest = arr[i];
     }
     else if(arr[i]>secondLargest && arr[i]!=firstLargest)
     {
         secondLargest = arr[i];
     }
 }
 if(secondLargest == INT_MIN && firstLargest == INT_MIN)
 {
    cout << "Second largest element does not exist" << endl;
 }
 else
 {
     cout<<"FirstLargest element is ."<<firstLargest<<endl;
     cout<<"SecondLargest Element is."<<secondLargest<<endl;
 }
}

int main()
{
    int arr[]= {10,5,19,2,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    secondLargestElement(arr,size);
    retun 0;
}
