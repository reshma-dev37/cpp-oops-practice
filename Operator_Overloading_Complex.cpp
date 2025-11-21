#include<iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int imag;
    
    Complex():real(0),imag(0){cout<<"Default constructor call"<<endl;}
    Complex(int r,int i)
    {
        real=r;
        imag=i;
        cout<<"Parameterized constructor"<<endl;
    }
    Complex operator +(const Complex &obj)
    {
        cout<<"Operator overloading call"<<endl;
        Complex temp;
        temp.real = real +obj.real;
        temp.imag = imag +obj.imag;
        return temp;
    }
    void display()
    {
        cout<<"Complex number is after addition:"<<real<<" "<<"+"<<" "<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c;
    Complex c1(10,20);
    Complex c2(2,6);
    Complex c3;
    c3= c1+c2;
    c3.display();
    return 0;
    
}
