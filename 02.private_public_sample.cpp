#include<iostream>
using namespace std;

class laalu
{
  private:
  char name[20];
 public:
 void read()
 {
   cout<<"\n\tEnter your name : ";
   cin>> name;
   cout<<"\tYour name is : "<<name;
 }
};

int main()
{
  laalu l1;
  l1.read();
  return 0;
}
