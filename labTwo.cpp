#include<iostream>
using namespace std;
class BBA{
    public: 
    string Stream;
};

class BCA{
    public: 
        float p;
};

int main(){
    BBA obj1, obj2;
    BCA obj3, obj4;

    // obj1.Stream = "Lovely";
    // obj2.Stream = "Professional";

    obj3.p=99.99;
    obj4.p=10.10;
    
    cout<<"Enter your First Name: ";
    cin>>obj1.Stream;
    cout<<"Enter your Last Name: ";
    cin>>obj2.Stream;
    cout<<"Enter a Number: ";
    cin>>obj3.p;
    cout<<"Enter a second Number: ";
    cin>>obj4.p;

    cout<<"Details are: "<<endl<<obj1.Stream;
    cout<<" "<<obj2.Stream<<endl;
    cout<<obj3.p<<endl;
    cout<<obj4.p;

    return 0;

}