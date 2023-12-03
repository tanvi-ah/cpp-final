#include <iostream>
using namespace std;

class base {
    public:
    int i ;
    base (int x){
        i=x;
    }
    virtual void func(){
        cout<<"using base vartion of func()";
        cout<<i<<"\n";
    }
};
class drived1:public base {
    public:
    drived1(int x): base(x){}
    void func(){
        cout<<"using drived class func()";
        cout<<i*i<<"\n";
    }
};
class drived2 : public base {
    public:
    drived2(int x):base(x){}
        void func(){
            cout<<"usind drived2 vasion of function()";
            cout <<i*i<<"\n";
        }
};
int main (){
    base *p;
    base ob(10);
    drived1 d_ob1(10);
    drived2 d_ob2(10);

    p = &ob;
    p->func();
    p=&d_ob1;
    p->func();
    p=&d_ob2;
    p->func();

}
