// Övning 2.2, sidan 27
#include <iostream>
using namespace std;
int main() {

    int tal1, tal2, tal3;
    /*
    Samma sak som rad 6
    int tal1;
    int tal2;
    int tal3;
    */
    
    /* Varge tal för sig
    cout << "Mata in tal 1 ";
    cin >> tal1;
    cout << "Mata in tal 2 ";
    cin >> tal2;
    cout << "Mata in tal 3 ";
    cin >> tal3;
    */
    
    // Tre tal eftervarandra med mellanslag emellan
    // "tal" "mellanslag" "tal" "mellanslag" "tal" "mellanslag" "Enter"
    cout << "Mata in tre tal ";
    cin >> tal1 >> tal2 >> tal3;
    
   
    int summa = tal1 + tal2 + tal3; // värdena i tal1, tal2, tal3 adderas
                                    // summan tilldelas variabeln summa
    
    cout << "Summan av de tre talen är " << summa;
    return 0;
}
