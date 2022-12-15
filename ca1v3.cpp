#include <iostream>

using namespace std;

class fruit
{
public:
    int apples = 0, mangoes = 0;
    int total_fruits = 0;
    void input_fruits()
    {
        cout << "Enter the number of apples : ";
        cin >> apples;

        cout << "Enter the number of mangoes : ";
        cin >> mangoes;
    }

    void calculate_total()
    {
        total_fruits = apples + mangoes;
        cout << "The total fruits in the basket are : " << total_fruits << endl;
    }
};

class apple : public fruit
{
public:
    void show_apples()
    {
        cout << "The number of apples in the basket is : " << apples << endl;
    }
};

class mango : public fruit
{
public:
    void show_mangoes()
    {
        cout << "The number of mangoes in the basket is : " << mangoes << endl;
    }
};

int main()
{
    apple a1;
    mango m1;
    a1.input_fruits();
    a1.show_apples();
    
    m1.input_fruits(); 
    m1.show_mangoes();
    a1.calculate_total();
    
}