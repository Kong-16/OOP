#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1);

void f(char c, int line) { // c�� 10��, line �� ��ŭ ����ϴ� ���α׷�
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}


int main() {
	f(); //�Ѵ� default. ' ' �� ���� ,10�� ���
	f('%');// c �� default. %�� ����, 10�� ���
	f('@', 5); // @�� 5�� 10�����
}