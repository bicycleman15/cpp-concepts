#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;
    cout << a << " " << b << endl;

    int x = a, y = b;
    cout << x << " " << y << endl;

    // assigning any integer/float to bool will give it true or false only
    a = 2.1; // a = 2;
    cout << a << endl;

    x = a; cout << x << endl;

    x = (bool) 5; cout << x << endl;
    x = 5; cout << x << endl;
}