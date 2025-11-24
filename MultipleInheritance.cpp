//Multiple /inheritance : Class which is derived from more than one base class.

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
class Pet 
{
    public:
    void walk()
    {
        cout<<"Animal is walking:"<<endl;
    }

};

class Cat: public Animal, public Pet
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
    Pet p;
    p.walk();

    Cat c;
    c.eat(); //own method
    c.sound();//base class Animal method
    c.walk(); //base class Pet method

    return 0;
}
