#include<iostream>
using namespace std;
class A
{
 int A;
 public:
 void getvalue()
 {
   cout<<"Enter the value : ";
   cin>>A;
 }
 friend class B;
};

class B
{
 public:
 void show_value (A x)
 {
   cout<<endl<<"Accessing the value : "<<x.A;
 }

};

int main()
{
 A aa;
 B b;
 aa.getvalue();
 b.show_value(aa);
 return 0;
}
