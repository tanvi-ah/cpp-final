#include<iostream>
using namespace std;

class base
{
protected:
    int a, b;
public:
    void showab(int n, int m)
    {
        a = n;
        b = m;
    }
};
class derived : public base{
    int c;
public:
    void showc(int i)
    {
        c = i;
    }
    void showAll()
    {
    cout<<"A & B & C : "<<a<<" -> "<<b<<" -> "<<c<<endl;
    }
};
int main()
{
    derived ob;
    ob.showab(10,20);
    ob.showc(5);
    ob.showAll();

}
