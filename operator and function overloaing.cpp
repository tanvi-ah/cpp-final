#include<iostream>
using namespace std;
class base
{
    int x, y;
public:
    base() // constructor without argument
    {
        x = 0;
        y = 0;
    }
    base(int a, int b) // constructor with argument
    {
        x = a;
        y = b;
    }
    void getsum(int &a, int &b) // pass arguments by reference
    {
        a = x;
        b = y;
    }
    base operator +(base ob) // operator overloading for addition
    {
        base temp;
        temp.x = x + ob.x;
        temp.y = y + ob.y;
        return temp;
    }
    base operator -(base ob) // operator overloading for subtraction
    {
        base temp;
        temp.x = x - ob.x;
        temp.y = y - ob.y;
        return temp;
    }
    base operator =(base ob) // operator overloading for assignment
    {
        x = ob.x;
        y = ob.y;
        return *this;
    }

// Function overloading for addition
    base operator +(int value)
    {
        base temp;
        temp.x = x + value;
        temp.y = y + value;
        return temp;
    }

// Function overloading for subtraction
    base operator -(int value)
    {
        base temp;
        temp.x = x - value;
        temp.y = y - value;
        return temp;
    }

// Function overloading for assignment
    base operator =(int value)
    {
        x = value;
        y = value;
        return *this;
    }
};
int main()
{
    base o1(10, 20), o2(2, 3), o3;
    int x, y;
    o3 = o1 + o2;
    o3.getsum(x, y);
    cout << "Result after addition: A = " << x << ", B = " << y << endl;
    o3 = o1 - o2;
    o3.getsum(x, y);
    cout << "Result after subtraction: A = " << x << ", B = " << y << endl;
    o3 = o1;
    o3.getsum(x, y);
    cout << "Result after assignment: A = " << x << ", B = " << y << endl;
// Using function overloading
    o3 = o1 + 5;
    o3.getsum(x, y);
    cout << "Result after addition with int: A = " << x << ", B = " << y << endl;
    o3 = o1 - 3;
    o3.getsum(x, y);
    cout << "Result after subtraction with int: A = " << x << ", B = " << y << endl;
    o3 = 8;
    o3.getsum(x, y);
    cout << "Result after assignment with int: A = " << x << ", B = " << y << endl;
    return 0;
}
