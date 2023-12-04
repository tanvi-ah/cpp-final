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
public:
    derived(){
        cout<<"This is a Derived class constructor"<<endl;

    }    ~derived(){
        cout<<"This is a Derived class Distructor"<<endl;

    }
};
int  main()
{
    derived ob;
}
