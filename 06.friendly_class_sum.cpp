 #include<iostream>
using namespace std;
class B;

 class A
{
int value;
public:
A()
{
value = 5;
}
friend int sum(A v1,B v2);
};

class B
{
  int value;
  public:
  B()
  {
      value=3;
  }
  friend int sum(A v1,B v2);
};

int sum(A v1,B v2)
{
  return (v1.value + v2.value);
}

int main()
{
  A a;
  B b;
  cout<<"Sum : "<<sum(a,b)<<endl;
  return 0;
}
