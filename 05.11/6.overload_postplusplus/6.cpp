#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick, this->punch = punch;
	}
	void show();
	Power& operator++(int x); //후위
};

void Power::show() {
	cout << "kick = " << kick << "punch = " << punch << endl;
}

Power& Power :: operator++(int x) {
	Power tmp = *this; // 증가 이전 저장
	kick++;
	punch++;
	return tmp; // 증가 이전 상태 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();

	b = a++;
	a.show(); // a는 1증가함.
	b.show(); //b는 증가이전.
}