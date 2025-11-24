//Singleinheritance : A class inherits from one and only base class.

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

int main()
{
    Animal a;
    a.sound();
    Dog d;
    d.sound();//base class method
    d.Bark(); //own method
}
