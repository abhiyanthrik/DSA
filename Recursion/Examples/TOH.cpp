#include <iostream>
using namespace std;

void toh(int n, int A, int B, int C) {
	if (n > 0) {
		toh(n - 1, A, C, B);
		cout << "(From " << A << " To " << C << ")" << "\n";
		toh(n - 1, B, A, C);
	}
}