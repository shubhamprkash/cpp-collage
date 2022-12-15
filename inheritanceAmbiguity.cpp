#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"class A \n";
    }
};

class B:public A{
    public:
    void show(){
        cout<<"class B \n";
    }
    
};
class C: public A{
    public:
    void show(){
        cout<<"class C \n";
    }
};
class D : public B, public C{

    public:
    void show(){
        cout<<"class D \n";
    }
};

int main(){
    B objB;
    C objC;
    D objD;

    objB.A::show();
    objC.A::show();
    objD.C::show();
    objD.show();

}