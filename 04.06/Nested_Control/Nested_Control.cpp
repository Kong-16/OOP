#include <iostream>
using namespace std;
int main() {

	for (int x = 0; x < 8; x++) {
		if (x >= 2) {
			for (int y = 0; y < 8; y++) {
				cout << y;
			}
			cout << endl;
		}
	}
	return 0;
}