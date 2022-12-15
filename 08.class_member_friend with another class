#include<iostream>
using namespace std;
class A;

class B{
int b=2;
public:
void max(A x, B y);
};

class A
{
int a= 1;
public:
friend void B:: max(A, B);
};

void B :: max(A x, B y) // max friend
{ 
if(x.a > y.b)
cout<<"x is greater";
else
cout<<"y is greater";
}

int main()
{
A x;
B y,c;
c.max(x,y);
}
