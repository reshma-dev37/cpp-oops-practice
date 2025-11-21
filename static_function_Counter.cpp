#include<iostream>
using namespace std;

class Counter
{
    public:
    static int count;
    Counter()
    {
        count++;
    }
    static int countNumObject()
    {
        return count;
    }
};
int Counter::count =0;
int main()
{
    Counter c;
    cout<<Counter::countNumObject()<<endl;
    Counter c1;
    cout<<Counter::countNumObject()<<endl;
    return 0;    
}
