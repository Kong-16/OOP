#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int age;
public:
	Person(const char myname[], int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strncpy(name, myname, sizeof(myname));
		age = myage;
	}

	void showPersonInfo() const {
		cout << "이름" << name << endl;
		cout << "나이" << age << endl;
	}

	~Person() {
		delete[] name;
		cout << "Destructor is called!" << endl;
		//_sleep(1000);
	}


};

int main() {

	Person man1("Jeong A Kang", 14);
	Person man2("Miminy Kang", 14);

	man1.showPersonInfo();
	man2.showPersonInfo();

	return 0;
}