#include <iostream>

using namespace std;

void CallByAddress(char* add) {
	cout << sizeof(add) << endl; // �ּҰ��� ũ���� 4��ȯ
}
void CallByReference(char& ref) {
	cout << sizeof(ref) << endl; //char �� ũ���� 1��ȯ
}

int main() {
	char nBuf;
	CallByAddress(&nBuf);
	CallByReference(nBuf);

}