#include <iostream>
using namespace std;

class fact
{
int n,i;
long int a;
public:
 void read();
 void cal();
};
void fact::read()
{
 cout<<"Enter a number:";
 cin>>n;
}
void fact::cal()
{
 a=1;
 i=1;
while(i<=n)
 {
   a=a*i;
   i++;
 }
cout<<"Factorial of the given number = "<<a;
}
int main()
{
 fact f;
 f.read();
 f.cal();
 return 0;
}
