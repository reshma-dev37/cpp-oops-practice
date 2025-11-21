#include<iostream>
using namespace std;

class Vehicle
{
public:
    virtual void startEngine()
    {
        cout << "Vehicle engine starts" << endl;
    }

    virtual void stopEngine()
    {
        cout << "Vehicle engine stops" << endl;
    }

    virtual void accelerate()
    {
        cout << "Vehicle accelerates" << endl;
    }

    virtual void brake()
    {
        cout << "Vehicle slows down" << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Car engine starts with a key" << endl;
    }

    void stopEngine() override
    {
        cout << "Car engine stopped" << endl;
    }

    void openDoor()
    {
        cout << "Car door opened" << endl;
    }

    void operateWipers()
    {
        cout << "Car wipers operating" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Bike engine starts with kick-start" << endl;
    }

    void stopEngine() override
    {
        cout << "Bike engine stopped" << endl;
    }

    void engageKickStand()
    {
        cout << "Bike kickstand engaged" << endl;
    }
};

int main()
{
    Vehicle *v = new Vehicle();
    v->startEngine();
    v->stopEngine();
    delete v;
    cout<<"------------------------"<<endl;
    Vehicle *v1=new Car();
    v1->startEngine();
    v1->stopEngine();
    delete v1;
    cout<<"------------------------"<<endl;

    Vehicle *v2 = new Bike();
    v2->startEngine();
    v2->stopEngine();
    delete v2;
    cout<<"------------------------"<<endl;
    
    Car c;
    c.openDoor();
    c.operateWipers();
    
    Bike b;
    b.engageKickStand();
    return 0;
}
