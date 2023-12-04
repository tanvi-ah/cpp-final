#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class base{
public:
    base(){
        cout<<"This is a base class constructor"<<endl;

    }    ~base(){
        cout<<"This is a base class Distrucor"<<endl;

    }
};
class derived : public base
{
    int a;
public:
    derived(int b){
        cout<<"This is a Derived class constructor"<<endl;
        a = b;

    }    ~derived(){
        cout<<"This is a Derived class Distructor"<<endl;

    }
    void showa()
    {
        cout<<"A: "<<a<<endl;
    }
};
int  main()
{
    derived ob(10);
    ob.showa();
}

