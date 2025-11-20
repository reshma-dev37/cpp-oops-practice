#include<iostream>
using namespace std;

class Temperature
{
    private:
    float temp;
    public:
    Temperature():temp(273){}
    void setTemp(float t)
    {
        if(t>0)
        {
            temp=t;
            if(temp<273)
            {
                cout<<"Temparature is below freezing point!!!"<<endl;
            }
        }
        else
        {
            cout<<"Invalid temparature value!!"<<endl;
        }
    }
    float getTemp() const
    {
        return temp;
    }
    void showTempValue()
    {
        cout<<"Temparature value:"<<temp<<endl;
    }
};

int main()
{
    Temperature t;
    t.setTemp(289);
    cout<<t.getTemp()<<endl;
    t.showTempValue();
}
