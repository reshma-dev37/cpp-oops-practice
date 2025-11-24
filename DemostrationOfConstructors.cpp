#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int *breadth;
    int height;

    //default constructor
    Rectangle()
    {
        length =0;
        breadth =nullptr;
        height =0;
        cout<<"Default constructor:"<<endl;
    }
    //Parameterized constructor
    Rectangle(int l,int b,int h)
    {
        length =l;
        breadth = new int;
        *breadth = b;
        height = h;
        cout<<"Paramterized constructor :"<<endl;
    }
    //Copy constructor
    Rectangle(const Rectangle &obj)
    {
        length = obj.length;
        breadth = new int;
        *breadth = *(obj.breadth);
        height = obj.height;
        cout<<"Copy constructor is called"<<endl;
    }
    //copy assignment operator
    Rectangle& operator = (const Rectangle &obj)
    {
        cout<<"Copy assignment operator is called"<<endl;
        if(this==&obj)
        {
            return *this;
        }
        delete breadth;
        length = obj.length;
        breadth = new int;
        *breadth = *(obj.breadth);
        height = obj.height;
        return *this;
    }
    //Move Constructor
    Rectangle (Rectangle &&obj)
    {
        cout<<"Move constructor is called:"<<endl;
        length = obj.length;
        breadth = (obj.breadth);
        obj.breadth = nullptr;
        height = obj.height;
    }
    //Move Assignment Operator
    Rectangle& operator =(Rectangle &&obj)
    {
        cout<<"Move assignment operator is called"<<endl;
        if(this==&obj)
        {
            return *this;
        }
        delete breadth;
        length = obj.length;
        breadth = (obj.breadth);
        height = obj.height;
        obj.breadth = nullptr;
        return *this;
    }
    void display()
    {
        cout<<"Length and height is:"<<length<<" "<<height<<endl;
        if(breadth)
        {
            cout<<"Data is present :"<<*breadth<<endl;
        }
        else{
            cout<<"No data is present:"<<endl;

        }
    }
    ~Rectangle()
    {
        cout<<"Destructor is called:"<<endl;
        delete breadth;
    }

};
int main()
{
   Rectangle R;
   Rectangle R1(10,20,30);
   Rectangle R2 = R1;
   R1.display();
   R2.display();
   R.display();
   cout<<"-----------------------"<<endl;

   Rectangle R3;
   R3 = R2;
   cout<<"-----------------------"<<endl;
   R3.display();
   R2.display();
   cout<<"-----------------------"<<endl;
   
   Rectangle R4 = std::move(R3);
   R4.display();
   cout<<"----------------------"<<endl;

   Rectangle R5;
   R5 =std::move(R4);
   R5.display();
   R4.display();

}
