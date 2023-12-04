#include<iostream>
using namespace std;

class snap
{
    int a;
protected:
    int b;
public:
    int c;

    snap(int n, int m)
    {
        a = n;
        b = m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
int main()
{
    snap op(10,20);
    op.c = 30;

    cout<<"A: "<<op.geta()<<endl<<"B: "<<op.getb()<<endl<<"c: "<<op.c<<endl;

}
