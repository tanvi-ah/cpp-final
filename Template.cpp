#include<iostream>
using namespace std;
template <class temp1, class temp2>
temp1 add(temp1 a, temp2 b)
{
    return a + b;
}
int main()
{
    double a = 10.12;
    double b = 20.20;
    cout<<"THE Sum is: "<<add(a,b)<<endl;
}
