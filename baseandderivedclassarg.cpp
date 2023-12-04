#include<iostream>
using namespace std;
class base{
    int a;
public:
    base(int b)
    {
        cout<<"This is a base class contructor."<<endl;
        a = b;
    }
    ~base()
    {
        cout<<"This is a base class distrucor"<<endl;
    }
    void showa()
    {
        cout<<"A: "<<a<<endl;
    }
};
class derived : public base
{
        int c;
public:
    derived(int d) : base(d)
    {
        cout<<"This is a Derived class contructor."<<endl;
        c = d;
    }
    ~derived()
    {
        cout<<"This is a Derived class distrucor"<<endl;
    }
    void showb()
    {
        cout<<"B: "<<c<<endl;
    }
};
int main()
{
    derived ob(10);
    ob.showa();
    ob.showb();
}
