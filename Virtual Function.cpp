# include <iostream >
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"This is Virtual Base"<<endl;
    }
};
class derived:public base
{
public:
    void display()
    {
        cout<<"This is Virtual Derived"<<endl;
    }
};
int main ()
{
    base *ba;
    base b1;
    derived d1;
    ba = &d1;
    ba ->display();
}

