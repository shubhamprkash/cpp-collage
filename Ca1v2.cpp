/*
Make a class named Fruit with a data member to calculate the number of fruits in a basket. 
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
Print the number of fruits of each type and the total number of fruits in the basket.
*/

#include <iostream>
using namespace std;

class fruit      // master class with all data members
{
public:
    int apples, mangoes;       // separate data members apples and mangoes values
    int totalFruits;           // total fruits in a basket value data member
    void input_fruits()        // function to take input of fruits
    {
        cout<<"Enter the number of Apples : ";
        cin>>apples;
        cout<<"Enter the number of Mangoes : ";
        cin>>mangoes;
    }

    void calculate_total()      //function to calculate total fruits
    {
        totalFruits = apples + mangoes;
        cout<<"The total Fruits in the basket are : "<<totalFruits<<endl;
        cout<<"--------------------------------------------------------------"<<endl;
    }
};

class apple : public fruit    
{
public:
    void show_apples()   //shows apple count
    {   
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"The number of Apples in the basket is : "<<apples<<endl;
    }
};

class mango : public apple
{
public:
    void show_mangoes()   //shows mangoes count in basket
    {
        cout<<"The number of mangoes in the basket is : "<<mangoes<< endl;
    }
};

int main()
{
    mango m1;
    m1.input_fruits();
    m1.show_apples();
    m1.show_mangoes();
    m1.calculate_total();
    return 0;
}