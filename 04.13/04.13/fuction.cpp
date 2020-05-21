#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent) {
	int res = 1;
	for (int i = 0; i < exponent; i++) { //exponent È½¼ö¸¸Å­ 
		res = res * base; //base ¸¦ °öÇÔ
	}
	return res;
}

int main() {
	/*int threeExpFour = 1;
	for (int i = 0; i < 4; i++) {
		threeExpFour = threeExpFour * 3;
	}
	cout << "3^4 is" << threeExpFour << endl;

	int sixExpFive = 1;
	for (int i = 0; i < 5; i++) {
		sixExpFive = sixExpFive * 6;
	}
	cout << "6^5 is" << sixExpFive << endl;*/
	int threeExpFour = raiseToPower(3, 4);
	cout << "3^4 is" << threeExpFour << endl;

	int sixExpFive = raiseToPower(6, 5);
	cout << "6^5 is" << sixExpFive << endl;
}