#include<iostream>
using namespace std;

class Payment
{
    private:
    float amount;
    public :
    void setAmount(float amount)
    {
        this->amount =amount;
    }
    float getAmount()
    {
        return amount;
    }
    virtual void makePayment() =0;
    virtual void paymentStatus()=0;
    virtual ~Payment()
    {
        cout<<"This is destructor call:"<<endl;
    }
};

class UPI : public Payment
{
    private:
    string upiId;
    string transactionId;
    public:
    void setUpiId(string upiId)
    {
        this->upiId= upiId;
    }
    string getUpiId()
    {
        return upiId;
    }
    void makePayment() override
    {
        if(upiId.empty())
        {
        cout << "UPI ID not set. Payment Failed!" << endl;
        transactionId = "";
        return;
        }
    cout << "Processing UPI payment of amount: " <<getAmount() << endl;
    transactionId = "TXN12345";
    }
    void paymentStatus() override
    {
        if(transactionId.empty())
        {
            cout<<"UPI payment Failed"<<endl;
        }
        else
        {
            cout<<"UPI payment success and transactionID is:"<<transactionId<<endl;
        }
    }
    ~UPI()
    {
        cout<<"UPI destructor is called"<<endl;
    }
};
class Card : public Payment
{
    private:
    string cardNumber;
    string cardHolderName;
    string expiryDate;
    
    public:
    void setCardDetails(string cardNumber, string cardHolderName, string expiryDate)
    {
        this->cardNumber = cardNumber;
        this->cardHolderName= cardHolderName;
        this->expiryDate = expiryDate;
    }
    void getCardDetails()
    {
        cout<<"Card Number:"<<cardNumber<<" "<<"CardHolderName:"<<cardHolderName<<" "<<"Expiry Date:"<<expiryDate<<endl;
    }
    void makePayment() override
    {
        if(cardNumber.empty()|| cardHolderName.empty()||expiryDate.empty())
        {
            cout<<"card Details incomplete:"<<endl;
            return;
        }
        cout<<"Processing card payment"<<getAmount()<<endl;
    }
    void paymentStatus() override
    {
        if(cardNumber.empty())
        {
            cout<<"Payment Failed"<<endl;
        }
        else
        {
            cout<<"Payment is successful"<<endl;
        }
    }
    ~Card()
    {
        cout<<"Card destructor is called"<<endl;
    }
};
class Cash: public Payment
{
    private:
    float cashReceived;
    public:
    void setCashReceived(float cash)
    {
        cashReceived = cash;
    }
    float getCashReceived()
    {
        return cashReceived;
    }
    void makePayment() override
    {
        if(cashReceived <getAmount())
        {
            cout<<"Insufficient amount ,"<<(getAmount()-cashReceived)<<endl;
        }
        else
        {
            cout<<"Cash payment accepted:"<<endl;
        }
    }
    
    void paymentStatus() override
    {
        if(cashReceived <getAmount())
        {
            cout<<"Cash payment failed"<<endl;
        }
        else
        {
            cout<<"Cash payment successful!!"<<endl;
        }
    }
    ~Cash()
    {
        cout<<"Cash destructor is called"<<endl;
    }
};

int main()
{
    Payment *p = new UPI();
    p->setAmount(1000);
    cout<<p->getAmount()<<endl;
    delete p;
    cout<<"-------------------"<<endl;
    //UPI
    UPI upi1;
    upi1.setUpiId("UPI1234");
    cout<<upi1.getUpiId()<<endl;
    upi1.setAmount(1000);

    upi1.makePayment();
    upi1.paymentStatus();
    cout<<"-------------------"<<endl;

    //Card
    Card c1;
    c1.setCardDetails("ICICI123","Riya","12-08-2027");
    c1.getCardDetails();
    c1.setAmount(500);
    c1.makePayment();
    c1.paymentStatus();
    cout<<"-------------------"<<endl;

    //Cash
    Cash csh;
    csh.setCashReceived(100);
    cout<<csh.getCashReceived()<<endl;
    csh.setAmount(500);
    csh.makePayment();
    csh.paymentStatus();
}


