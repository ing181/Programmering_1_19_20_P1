// Division med heltal
#include <iostream>
using namespace std;
int main() {
	
	setlocale(LC_ALL,"swedish");
	
//	int a = 3;
//	int b = 8;
	
//	cout << (b / a) << endl;  // 2 Vad blir över? 2
//	cout << (b % a) << endl;  // 2 Vad blir över? 2
	
	int minuter = 139;
	cout << minuter << " minuter är lika med " << (minuter / 60) << " timmar och " << (minuter % 60) << " minuter" << endl;
	
	return 0;
}
