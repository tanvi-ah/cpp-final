#include<iostream>
using namespace std;
class mobileUser{
public:
    void call()
    {
        cout<<" Hello"<<endl;
    }
    virtual void sendMassage() = 0;
};

class rohim : public mobileUser
{
public:
     void sendMassage ()
     {
         cout<<"This is Rohim Ahmed"<<endl;
     }
};
class tanvir : public mobileUser
{
public:
     void sendMassage ()
     {
         cout<<" This is Tanvir Ahmed"<<endl;
     }
};
int main()
{
    mobileUser *m;
    rohim r;
    tanvir t;

    m = &r;
    m->call();
    m->sendMassage();
    m = &t;
    m->sendMassage();
}
