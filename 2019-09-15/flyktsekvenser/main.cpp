// Escape sequences
// Flyktsekvenser
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"swedish");
	cout << "\"Hej p� dig v�rlden!\"" << endl;
	cout << "\\Hej p� dig v�rlden!\\" << endl;
	cout << "Hej p�  \n dig v�rlden!" << endl;
	return 0;
}
