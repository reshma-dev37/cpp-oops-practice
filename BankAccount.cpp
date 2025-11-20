#include<iostream>
using namespace std;

class BankAccount
{
    private:
    int balance;
    public:
    BankAccount():balance(0){};
    void deposit(int amount)
    {
        if(amount >0)
        {
        balance+=amount;
        cout<<"Amount deposited :"<<amount<<endl;
        }
        else
        {
            cout<<"Please enter valid amount to depposit:"<<endl;
        }
    }
    void withdraw(int amount)
    {
       if(amount <=balance && amount >0)
       {
           balance-=amount;
           cout<<"Amount withdrawn:"<<amount<<endl;
       }
       else
       {
           cout<<"Insufficient balance is available in your account:"<<endl;
       }
    }
    void showBalance()
    {
        cout<<"Current balance is:"<<balance<<endl;
    }
};
int main()
{
    BankAccount ac;
    int d,w;
    cout<<"Enter amount to deposit:"<<endl;
    cin>>d;
    ac.deposit(d);
    
    cout<<"Enter amount to withdraw:"<<endl;
    cin>>w;
    ac.withdraw(w);
    ac.showBalance();
        
}
