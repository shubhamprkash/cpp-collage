#include <iostream>
using namespace std;

class emp{
    public:
    string Name;
    int Age;

    emp(string name, int age){
        Name=name;
        Age=age;
    }

    void intro(){
        cout<<"\nName: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl<<endl;
    }
};

int main(){
    emp obj ("Ram", 24);
    obj.intro();
}