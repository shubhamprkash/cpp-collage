#include<iostream>
using namespace std;

class one;
class two;

class one
{
    int a = 10;
    public:
    friend int cal(one a, two b);
};

class two
{
    int b = 20;
    public:
    friend int cal(one a, two b);
};

int cal(one x,two y)
{
    return (x.a > y.b) ? x.a : y.b;
}

int main()
{
    one x;
    two y;
    cout << cal(x,y);
}