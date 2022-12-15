#include<iostream>
using namespace std;

class A {
    public:
    void alpha(){
        cout<<"class A accessed!!\n";
    }
};

class B{
    public:
    void beta(){
        cout<<"class B accessed!!\n";
    }
};

class C{
    public:
    void cat(){
        cout<<"class C accessed!!\n";
    }
};

class D: public A, public B, public C{
    public:
    void dango(){
        cout<<"class D accessed!!\n";
    }
};


class E : public D{
    public:
    void ela(){
        cout<<"classs E accessed!!"<<endl;
    }
};


class F: public D{
    public:
    void forgo(){
        cout<<"Classs F in the house!!\n";
    }
};


int main(){
    D obj;
    E objE;
    F objF;

    obj.alpha();
    obj.beta();
    obj.cat();

    objE.dango();
    objE.ela();
    objF.dango();
    objF.forgo();

}