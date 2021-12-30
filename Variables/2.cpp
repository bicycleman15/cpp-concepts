#include <iostream>
#include "h1.h"
// #include "h1.h" // cannot do this, sinc we redeclare var1, however, multiple prototypes can exist. However, I must
                   // define the function only once
#include "h2.h"
#include "h2.h" // can redeclare multiple times due to the guard

using namespace std;

#define watch(x) cout << #x << " " << x << endl;

int a = 100;

int main() {
    cout << "hello world" << endl;

    watch(var1);
    watch(var2);

    f1(1,1);
}

void f1(int a, int b) {
    cout << "This is f1" << endl;

    // local variable are referenced, to access global defined int a, use ::a
    watch(a);
    watch(b);
}