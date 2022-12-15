// output() function inside the class and input() function outside the class.

#include<iostream>
using namespace std;

class mca{
    public:
        string name;
        void input();
        void output(string name){
            cout<<"Name: "<<name;
        }
};

void mca::input(){
    mca::name;
    cout<<"Enter Your Name: "<<endl;
    cin>> name;
}

int main(){
    mca a;
    a.input();
    a.output(a.name);
}