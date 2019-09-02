#include <iostream>
using namespace std;
int main() {
    
    int tal; // En variabel deklareras
    cin >> tal; // Inmatning till tal från tangentbordet
    cout << "Du matade in " << tal; // Utskrift av innehållet i tal
    tal = tal - 1; // tal minskas med 1
    cout << "Nu har tal värdet " << tal; // Utskrift av innehållet i tal

    return 0;
}
