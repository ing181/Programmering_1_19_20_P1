// Escape sequences
// Flyktsekvenser
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"swedish");
	cout << "\"Hej på dig världen!\"" << endl;
	cout << "\\Hej på dig världen!\\" << endl;
	cout << "Hej på  \n dig världen!" << endl;
	return 0;
}
