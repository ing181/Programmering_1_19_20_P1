// �vning 2.4, sidan 31
#include <iostream>
using namespace std;

int main() {
	char tecken = 88; // Heltal, representerar lilla a. Kolla ASCII-tabellen.
	char tecken2 = 'X'; // OBS "enkelfnuttar" runt. Funkar bara med ETT tecken.
	cout << tecken << " " << tecken2 << endl;
	// Eftersom det �r ett heltal g�r det att addera och att subtrahera
	tecken = tecken + 1;
	tecken2 = tecken2 - 1;
	cout << tecken << " " << tecken2 << endl;
	// Funkar att tilldela en char-variabel v�rdet av en int-variabel
	int i = 77;
	char t = i;
	cout << t << endl;
	// Heltalet f�r tecknet '2'
	char tva = 50;
	cout << tva << endl;
	int heltal = 50 / tva;  // tva �r inte 2, utan v�rdet f�r tecknet 2, 50
	cout << heltal << endl;
	return 0;
}
