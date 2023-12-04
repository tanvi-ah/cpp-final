#include<iostream>
using namespace std;

class base{
protected:
    int a, b;
public:
    void showab(int m, int n)
    {
        a = m;
        b = n;
    }

};
class derived : public base
{
    int c;
public:
    void showc(int d)
    {
        c = d;
    }
    void showabc()
    {
        cout<<a<<" "<<b<<"  "<<c<<endl;
    }
};
int main()
{
    derived ob;
    ob.showab(10,20);
    ob.showc(15);
    ob.showabc();
}
