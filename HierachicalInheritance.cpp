//Hierachicalinheritance : One base class ->Many derived classes.
#include<iostream>
using namespace std;

class Animal
{
   public:
   void sound()
   {
    cout<<"Animal sound:"<<endl;
   }
};
class Dog: public Animal
{
    public:
    void Bark()
    {
        cout<<"Baw -Baw"<<endl;
    }

};

class Cat: public Animal
{
    public:
    void eat()
    {
        cout<<"cat is eating fish"<<endl;
    }
};

int main()
{
    Animal a;
    a.sound();
    Dog d;
    d.sound();//base class method
    d.Bark(); //own method

    Cat c;
    c.eat(); //own method
    c.sound();//base class method
    return 0;
}
