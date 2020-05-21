#pragma warning(disable :4996)
#include <iostream>
//#include <time.h> //or <ctime>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	time_t m_t = time(NULL);
	struct tm* m_tm;
	
	//POSIX-specific
	//int result = putenv("TZ=Asia/Seoul");
	cout << "[한국시간]" << asctime(localtime(&m_t)) << endl;

	return 0;
}