//Make a class named Fruit with a data member to calculate the number of fruits in a basket. 
//Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
//Print the number of fruits of each type and the total number of fruits in the basket.

#include <iostream>
using namespace std;

class Fruit{
    public:
    int totalFruitsInBasket,applesNum,mangoesNum;


};

class Apples : public Fruit{
    public:
    // int applesNum;
    
};

class Mangoes : public Fruit{
    public:
    // int mangoesNum;
};


int main(){
    Fruit obj;
    Apples obj1;
    Mangoes obj2;
    obj.totalFruitsInBasket= obj1.applesNum + obj2.mangoesNum;

}
