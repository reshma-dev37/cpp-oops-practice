/*Lamba Expression - Simple , Anonymous function directly you can write in the code.
[](){};
[]-capture list
()- paramters.
{} - body
*/

#include<iostream>
using namespace std;

int main()
{
    
    int arr[] = {2,6,10,25,67};
    int size =  sizeof(arr)/sizeof(arr[0]);

    int offset = 5;
    for_each(arr,arr+size,[offset](int &x)
    {
        x+=offset;
    });
    cout<<"After offset value addition  :"<<endl;
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Array elements :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
   int arr1[] = {2,7,3,9,10,12};
   int sum{0};
   int s = sizeof(arr1)/sizeof(arr1[0]);
   for_each(arr1,arr1+s,[&sum](int x)
  {
    sum+=x;
  });
cout<<"sum of array elements is:"<<sum<<endl;


int x = 10;
auto f = [x]() mutable
{
    x++;
};
cout<<"x is :"<<x<<endl;

auto fun = [](auto a,auto b)
{
    return a+b;
};
auto total = fun(2,3);
cout<<total<<endl;
cout<<"To pint typeof lambda :"<<typeid(f).name()<<endl;

//Problem 1 .Count even numbers
vector<int> v= {2,5,7,6,4,11,9,10};
auto result = count_if(v.begin(),v.end(),[](int x)
{
    return x%2==0;
});
cout<<"Even Numbers are:"<<result<<endl;

//Problem 2️. Sort vector by absolute value
vector<int> v1= {3,-2,0,-5,7,10,-12,20};
sort(v1.begin(),v1.end(),[](int a,int b)
{
    return abs(a)<abs(b);
});
cout<<"After sort elements :"<<endl;
for(int x:v1)
{
    cout<<abs(x)<<" ";
}
//Problem 3. Sum of elements greater than X
vector<int> vec = {2,12,7,15,25,10};
int add = 0;
int X =10;
for_each(vec.begin(),vec.end(),[&add,X](int x)
{
    if(x>X)
    {
        add+=x;
    }
});
cout<<"Sum is:"<<add<<endl;

//Problem 4️.Remove odd numbers
vec.erase(remove_if(vec.begin(),vec.end(),[](int x)
{
    return x%2!=0;
}),vec.end());
cout<<"After removing odd numbers , :"<<endl;
for(int x:vec)
{
    cout<<x<<" ";
}
cout<<endl;

//Problem 5️. Transform vector (add offset)
vector<int> vect = {2,10,23,7,14,8};
int Offset = 5;
transform(vect.begin(),vect.end(),vect.begin(),[Offset](int x)
{
    return x+Offset;
});
cout<<"After adding offset value:"<<endl;
for(int x:vect)
{
    cout<<x<<" ";
}
    cout<<endl;
    
// Thread + Lambda + Variable Capture
int Sum = 0;
thread t([&Sum]()
{
    for(int i=0;i<5;i++)
    {
        Sum+=i;
    }
});
t.join();
cout<<"After addition :"<<Sum<<endl;

//Thread-Safe using mutex
thread t1([]()
{
    lock_guard<mutex> lock(m);
    Counter++;
});

thread t2([]()
{
    lock_guard<mutex> lock(m);
    Counter++;
});
t1.join();
t2.join();
cout<<"After incrementing counter value is :"<<Counter<<endl;

cout<<"Main thread is executed!!"<<endl;

}
