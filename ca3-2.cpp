/* 
A vender wants to determine whether he should serve foods to someone. He
only serves foods to people whose age is 18 or more and when he is not on fasting.
Given the person's age, and whether fasting time is in session, create a function
which returns whether he should serve foods. Assume vender is a class which is
inherits from astract class restaurant to serve foods
*/
// Examples
// should_serve_foods(17, True) ➞ False(No serve foods)
// should_serve_foods(19, False) ➞ True(serve foods)
// should_serve_foods(30, True) ➞ False(No serve foods)


#include<iostream>
using namespace std;
class restaurant{
    public:

    virtual void should_serve_food(int age,bool fasting)=0;
};

class vendor : public restaurant{
    public: 
        void should_serve_food(int age, bool fasting){
             if(age >= 18 && fasting==false){
                cout<<"\nTrue(Serve Food)"<<endl;
             }
            else{
                cout<<"False(No serve Food)";
            }
        }
};

main(){
    vendor obj1;
    obj1.should_serve_food(17,true);
    obj1.should_serve_food(19,false);
    obj1.should_serve_food(30,true);
    obj1.should_serve_food(18,false);
}