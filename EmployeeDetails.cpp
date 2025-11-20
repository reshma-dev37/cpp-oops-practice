#include<iostream>
using namespace std;

class Employee
{
    private:
    int empid;
    string name;
    float salary;
    long long  phonenumber;
    string location;
    public:
    Employee():empid(0),name(""),salary(0.0),phonenumber(0),location("")
    {}
    Employee(int empid,string n,float s,int phn,string location)
    {
        this->empid=empid;
        name=n;
        salary =s;
        phonenumber=phn;
        this->location=location;
    }
    void display()
    {
        cout<<"Employee Details is:"<<endl;
        cout<<"Empid :"<<empid<<endl;
        cout<<"Name of Employee:"<<name<<endl;
        cout<<"Salary of employee :"<<salary<<endl;
        cout<<"Phonenumber is:"<<phonenumber<<endl;
        cout<<"Location of employee:"<<location<<endl;
    }
};
int main()
{
    Employee E;
    Employee E1(101,"Eden",25000.99,9778564534,"Mumbai");
    E1.display();
    cout<<"______________________"<<endl;
    Employee E2(207,"Ekta",45879.99,8924567890,"Pune");
    E2.display();

    
}
