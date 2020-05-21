#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1);

void f(char c, int line) { // c를 10번, line 줄 만큼 출력하는 프로그램
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}


int main() {
	f(); //둘다 default. ' ' 를 한줄 ,10번 출력
	f('%');// c 만 default. %를 한줄, 10번 출력
	f('@', 5); // @를 5줄 10번출력
}