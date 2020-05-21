#include <iostream>

using namespace std;

void CallByAddress(char* add) {
	cout << sizeof(add) << endl; // 주소값의 크기인 4반환
}
void CallByReference(char& ref) {
	cout << sizeof(ref) << endl; //char 의 크기인 1반환
}

int main() {
	char nBuf;
	CallByAddress(&nBuf);
	CallByReference(nBuf);

}