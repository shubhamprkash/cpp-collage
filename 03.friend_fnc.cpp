#include <iostream>
using namespace std;

class add
{
    int a,b,c;  //private
    friend void display(add);// non-member fnc
  public:
  void getdata() //memeber func
  {
    cout<<"Enter number one "<<endl;
    cin>>a;
    cout<<"Enter number two"<<endl;
    cin>>b;
  }
};
void display(add ad) //member of add class
{
  ad.c=ad.a+ad.b;
  cout<<"sum is "<<ad.c;

}

int main() {
  add aa; //aa having its owwn copy datamembers a,b,c
  aa.getdata(); //member fnc-add class
  display(aa);
}
