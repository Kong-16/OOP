#include <iostream>
using namespace std;

void fillLine() { //1��
	for (int i = 0; i < 25; i++)
		cout << '*';
	cout << endl;
}

void fillLine(int n, char c) { //2��
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 1���Լ� ����
	fillLine(10, '%'); //2���Լ� ����
}