//Vector - Sequnce Container - dynamic sized array .
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements or size of vector:"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Taking vector elements from user:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<endl;
    cout<<"Displaying vector elements:"<<endl;
    for(int &x: v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Reversing a vector elements:"<<endl;
    // reverse() - Reverses the elements of a vector in place
    reverse(v.begin(),v.end());
    cout<<"After reversing vector elements are:"<<endl;
    for(int y:v)
    {
        cout<<y<<" ";
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;

    vector<int>v2 ={20,10,0,10,5,7,5,7,20};
    cout<<"Displaying vector 2 elements:"<<endl;
    for(int x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // sort() - Sorts vector in ascending order
    sort(v2.begin(),v2.end());
    // unique() - Removes consecutive duplicate elements (after sorting)
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    cout<<"After sorting , unique elements arer:"<<endl;
    for(int x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;

    cout << "Sorting vector elements in ascending order using sort():" << endl;
    // Sorting original vector
    sort(v.begin(),v.end());
    for(int y:v)
    {
        cout<<y<<" ";
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;
    // Sorting in descending order using sort() ,greater<int>()
    cout << "Sorting vector elements in descending order using sort() with greater<int>():" << endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int y:v)
    {
        cout<<y<<" ";
    }
    cout<<endl;
    cout<<"-----------------------"<<endl;
    // Merging two sorted vectors
    vector<int> vect1 = {20,10,-3,8,-7,0,99};
    vector<int> vect2 = { 2,9,10,20,0,-4,100};
    // Sort both vectors first.
    sort(vect1.begin(),vect2.end());
    sort(vect2.begin(),vect2.end());
    int n1 = vect1.size();
    int n2= vect2.size();

    vector<int>vect3(n1+n2);
    // merge() - Combines two sorted vectors into a third sorted vector
    merge(vect1.begin(),vect1.end(),vect2.begin(),vect2.end(),vect3.begin());
    cout << "After merging two vectors using merge():" << endl;
    for(int val:vect3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"-----------------"<<endl;
    // max_element() - Returns iterator to highest element
    cout<<"Maximum element is:"<<*max_element(vect3.begin(),vect3.end())<<endl;
    // min_element() - Returns iterator to smallest element
    cout<<"Minimum element is:"<<*min_element(vect3.begin(),vect3.end())<<endl;
    int value;
    cout<<"Enter value to be searched in vector:"<<endl;
    cin>>value;
    // find() - Searches for an element and returns iterator position
    auto it = find(vect3.begin(),vect3.end(),value);
    if(it!=vect3.end())
    {
        int index = it - vect3.begin();
        cout<<"Element found at index and value:"<<index<<" "<<*it<<endl;
    }
    else
    {
        cout<<"Element not found:"<<endl;
    }    
    return 0;
}
