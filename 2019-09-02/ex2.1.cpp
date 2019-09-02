// Exempel 2.1, sidan 25
// plus +, minus -, gånger *, delat med /
#include <iostream>
using namespace std;
int main() {
    int a = 8;
    int b = 13 - a; // b = 13 - 8, d.v.s. 5
    b = b - a; // 5 - 8, d.v.s. -3
    a = a * a; // Gånger 8 * 8, d.v.s. 64
    cout << "a= " << a << ", b= " << b; // variabeln a innehåller värdet 8
                                        // variabeln b innehåller -3

    return 0;
}
