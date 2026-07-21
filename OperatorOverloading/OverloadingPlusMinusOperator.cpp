#include <bits/stdc++.h>
using namespace std;

class Complex
{
    public:
    int x,y;

    Complex()
    {
        x=0;
        y=0;
    }
    Complex(int x,int y)
    {
        this->x = x;
        this->y = y;
    }

    void operator-()
    {
        x=-x;
        y=-y;
    }

    Complex operator+(Complex c1)
    {
        Complex temp;
        temp.x=c1.x+x;
        temp.y=c1.y+y;
        return temp;
    }


};

int main()
{
    Complex c1(2,3);
    Complex c2(5,6);
    -c1;
    cout<<"Negative c1 is:"<<c1.x<<", "<<c1.y<<endl;
    Complex c3=c1+c2;
    cout<<"subtraction is:"<<c3.x<<", "<<c3.y<<endl;
    return 0;
}

/*
Output: 
Negative c1 is:-2, -3
subtraction is:3, 3
*/