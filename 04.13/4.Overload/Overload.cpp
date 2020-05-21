#include <iostream>
using namespace std;

void fillLine() { //1번
	for (int i = 0; i < 25; i++)
		cout << '*';
	cout << endl;
}

void fillLine(int n, char c) { //2번
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	fillLine(); // 1번함수 실행
	fillLine(10, '%'); //2번함수 실행
}