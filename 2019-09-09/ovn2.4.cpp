// Övning 2.4, sidan 31
#include <iostream>
using namespace std;

int main() {
	char tecken = 88; // Heltal, representerar lilla a. Kolla ASCII-tabellen.
	char tecken2 = 'X'; // OBS "enkelfnuttar" runt. Funkar bara med ETT tecken.
	cout << tecken << " " << tecken2 << endl;
	// Eftersom det är ett heltal går det att addera och att subtrahera
	tecken = tecken + 1;
	tecken2 = tecken2 - 1;
	cout << tecken << " " << tecken2 << endl;
	// Funkar att tilldela en char-variabel värdet av en int-variabel
	int i = 77;
	char t = i;
	cout << t << endl;
	// Heltalet för tecknet '2'
	char tva = 50;
	cout << tva << endl;
	int heltal = 50 / tva;  // tva är inte 2, utan värdet för tecknet 2, 50
	cout << heltal << endl;
	return 0;
}
