#include<iostream>
using namespace std;

class Test {
    int n;
friend void factorial(Test t);
public:
    void input() {
        cout << "Enter a number:";
        cin >> n;
    }

    
};

void factorial(Test t) {

    int f = 1, i;
    for (i = 1; i <= t.n; i++) {
        f = f*i;
    }
    cout << "Factorial is:" << f;
}

int main() {

    Test t;
    t.input();
    factorial(t);

    return 0;
}
