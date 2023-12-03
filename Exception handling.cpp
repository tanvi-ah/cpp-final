#include<iostream>
using namespace std;
int main()
{
    int x, y;
    try
    {
        cout<<"Enter 1st Number: ";
        cin>>x;
        cout<<"Enter 2nd Number: ";
        cin>>y;
        if(x==0 || y==0)
        {
            throw 1;
        }
        double z = (double) x / y;
        cout<<"The Result is: "<<z<<endl;
    }
    catch(int a)
    {
        cout<<"Divided by Zero is not possible."<<endl;
        cout<<"Please Try again.";
    }
}
