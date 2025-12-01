#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> vect1 = {"morning","hello","world"};
    cout<<"size of vect1 is:"<<vect1.size()<<endl;

    cout<<"Original vector is:"<<endl;
    for(string s:vect1)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    cout<<"Sorting in ascending order:"<<endl;
    sort(vect1.begin(),vect1.end(),[](string a,string b){return a.size()<b.size();});
    for(string asc:vect1)
    {
        cout<<asc<<" ";
    }
    cout<<endl;

    cout<<"Sorting is in descending order:"<<endl;
    sort(vect1.begin(),vect1.end(),[](string a,string b){return a.size()>b.size();});
    for(string des:vect1)
    {
        cout<<des<<" ";
    }
    cout<<endl;


}
