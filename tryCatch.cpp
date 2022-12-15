#include<iostream>
using namespace std;

void lpu(){
    cout<<"New Terminal Handler \n";
    abort();
}
int main()
{   
    set_terminate(lpu);
    try
    {
        int age=15;
        if(age >= 18){
            cout<<"access granted";
        }else{
            throw(age);
        }
    }
    catch(int num)
    {
        cout<<"access denied"<<endl;
        cout<<"age : "<<num;
    }
    
    

    return 0;
}
