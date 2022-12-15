#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream Myfile("Meow.txt");
    Myfile<<"Meow meow meeeeeeeeeeeeowwwww";
    Myfile.close();
}