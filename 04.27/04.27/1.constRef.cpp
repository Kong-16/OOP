#include <iostream>
using namespace std;

void printlt(const int& x) {
	cout << x << endl;
	// x = 3; ������. �������� ���� �Ұ�.
}

int main() {
	int a = 1;
	printlt(a);

	const int b = 2;
	printlt(b);

	printlt(3);

	printlt(2 + b);
}