#include<iostream>
using namespace std;

class Animal
{
    public:
   virtual  void sound()
    {
        cout<<"Animal barking sound"<<endl;
    }
    virtual void run()
    {
        cout<<"Animal is running"<<endl;
    }
    virtual void eat()
    {
        cout<<"Animal is eating food"<<endl;
    }
    virtual ~Animal()
    {
        cout<<"Animal class destructor is called"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void sound() override
    {
        cout<<"Dog is barking bow-bow"<<endl;
    }
    void eat() override
    {
        cout<<"Dog is eating chicken leg piece"<<endl;
    }
    ~Dog()
    {
        cout<<"Dog class destructor is called"<<endl;
    }
    
};

class Cat : public Animal
{
    public:
    void sound() override
    {
        cout<<"Cat is barking meow-meow"<<endl;
    }
    void eat() override
    {
        cout<<"Cat is eating fish"<<endl;
    }
    ~Cat()
    {
        cout<<"Cat class destructor is called"<<endl;
    }
};

int main()
{
    Animal *a = new Animal();
    a->sound();
    a->run();
    a->eat();
    delete a;
    cout<<"----------------------------"<<endl;
    Animal *d = new Dog();
    d->sound();
    d->eat();
    delete d;
    cout<<"-----------------------------"<<endl;
    
    Animal *c= new Cat();
    c->sound();
    c->eat();
    delete c;
    cout<<"--------------------------------"<<endl;
    return 0;
}
