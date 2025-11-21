#include<iostream>
using namespace std;

class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"Vehicle class constructor is called"<<endl;
    }
    virtual void startEngine()=0;
    virtual void stopEngine()=0;
    virtual ~Vehicle()
    {
        cout<<"Vehicle class destructor is called"<<endl;
    }
    
};

class Car: public Vehicle
{
    public:
    void startEngine()
    {
        cout<<"Car engine is started with key"<<endl;
    }
    void stopEngine()
    {
        cout<<"Car engine is stopped"<<endl;
    }
    ~Car()
    {
        cout<<"Car class destructor is called"<<endl;
    }
};
class Bike: public Vehicle
{
    public:
    void startEngine()
    {
        cout<<"Bike engine is started with kick"<<endl;
    }
    void stopEngine()
    {
        cout<<"Bike is stopped"<<endl;
    }
    ~Bike()
    {
        cout<<"Bike class destructor is called"<<endl;
    }
};

int main()
{

    cout<<"----------------------------"<<endl;
    Vehicle *vc= new Car();
    vc->startEngine();
    vc->stopEngine();
    delete vc;
    cout<<"---------------------------"<<endl;
    
    Vehicle *vb= new Bike();
    vb->startEngine();
    vb->stopEngine();
    delete vb;
    return 0;
}
