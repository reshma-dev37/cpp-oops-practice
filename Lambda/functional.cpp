/*std::function - type safe wrapper that can store any collable.*/

#include<iostream>
#include<functional>
using namespace std;
int add(int a,int b)

{
    return a+b;
}

function<int(int ,int)> product = [](int x,int y)

{
    return x*y;
};
struct Division
{
    int operator()(int a,int b)
    {
        return a/b;
    }

};

class Math
{
    public:
    int substraction(int a,int b)
    {
        return a-b;
    }
};
int main()
{
   function<int(int,int)> ft = add;
   cout<<"Addition of 2 integers is:"<<ft(2,3)<<endl;
   cout<<"Product of 2 integers :"<<product(2,30)<<endl;

   function<int(int,int)> div = Division{};
   cout<<"Division:"<<div(200,20)<<endl;
   Math math;
   function<int(int,int)> sub = bind(&Math::substraction,&math,placeholders::_1, placeholders::_2);
   cout<<"Substraction :"<<sub(15,5)<<endl;
   return 0;

}

