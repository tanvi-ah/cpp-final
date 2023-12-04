#include<iostream>
using namespace std;
class b1{
    int a;
public:
    b1(int n)
    {
        a = n;
    }
    int showa()
    {
        return a;
    }
};
class d1 : public b1{
    int b;
public:
    d1(int n,int m): b1(m)
    {
        b = n;
    }
    int showb()
    {
        return b;
    }
};
class e1:public d1{
    int c;
public:
    e1(int n, int m, int o) : d1(m,o)
    {
        c = n;
    }
    void allshow()
    {
        cout<<"A: "<<showa()<<" "<<"B: "<<showb()<<" "<<"C: "<<c<<endl;
    }
};
int main()
{
    e1 ob(10,20,30);
    ob.allshow();
}

