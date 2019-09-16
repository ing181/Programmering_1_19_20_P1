// Exempel 2.5, sidan 33
#include <iostream>
using namespace std;

int main()
{

    float a, b, c;
    cout << "Mata in tre decimaltal" << endl;
    cout << "Mata in tal nummer 1 ";
    cin >> a;
    cout << "Mata in tal nummer 2 ";
    cin >> b;  
    cout << "Mata in tal nummer 3 ";
    cin >> c;
    float summa = a+b+c;
    cout << a << "+" << b << "+" << c << "=" << summa << "\n";
    // float medelvarde = summa / 3;
    cout << "Medeltalet ar " << summa/3 << "\n";

    return 0;
}

