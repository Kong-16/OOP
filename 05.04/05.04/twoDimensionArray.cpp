#include <iostream>
using namespace std;

int** alloc2Dint(int rows, int cols) {

	int value = 0;
	if (rows <= 0 || cols <= 0) return NULL;
	int** mat = new int* [rows];
	for (int i = 0; i < rows; i++) {
		mat[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			*(mat[i] + j) = value++; // 이차원 배열에 value 값을 넣음. mat[i][j] 랑 같음
		}
	}
	return mat;
}

void free2Dint(int** mat, int rows, int cols = 0) {
	if (mat != NULL) {
		for (int i = 0; i < rows; i++) {
			delete[] mat[i];
		}
		delete[] mat;
	}
}

int main() {
	int** mat = alloc2Dint(3, 3);
	cout << mat[1][1] << endl; //4
	free2Dint(mat, 3, 3);
}