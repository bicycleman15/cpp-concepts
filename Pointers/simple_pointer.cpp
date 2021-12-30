#include <iostream>
using namespace std;

// variables are assigned on user-stack one after other.

#define watch(x) cout << #x << " " << x << endl;

int main() {
    uint a = 2, b = 8;
    unsigned long long c = (1LL<<33) + 8;
    watch(c);

    uint *ptr_a = &a;
    uint *ptr_b = &b;

    watch(a);
    watch(b);
    watch(*(ptr_a+1));
    watch(*(ptr_a+2));
    watch(*(ptr_a+3));

    cout << *((unsigned long long *)(ptr_a + 2)) << endl;
    cout << *((unsigned long long *)(ptr_a)) << endl; // this is not equal for some reason ??

    // int a = 3;
    // int b = 2;
    // long long c = (1LL<<33) + 8;
    // int *ptr_a = &a, *ptr_b = &a;

    // cout<<a<<" "<<*ptr_a<<" "<<*ptr_b<<"\n";

    // cout<<a<<" "<<b<<" "<<*(ptr_a+1)<<" "<<*(ptr_a-1)<<"\n";

    // cout<<c<<" "<<*(ptr_a+2)<<" "<<*(ptr_a+3)<<"\n";

    // cout<<*(long long*)(ptr_a+2)<<" "<<*((long long*)ptr_a + 1)<<"\n";

    // return 0;
}