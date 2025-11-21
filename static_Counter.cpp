#include<iostream>
using namespace std;

class Counter
{
    public:
    static int count; //Belongs to the class, not to objects.
    Counter()
    {
        count++;
    }
    void displayCount()
    {
        cout<<"Count value after object creation:"<<count<<endl;
    }
};
int Counter::count =0;
int main()
{
    Counter c;
    c.displayCount();
    Counter c1;
    c1.displayCount();

    Counter c2;
    c2.displayCount();
    Counter c3;
    c3.displayCount();
    c.displayCount();
    return 0;
}
