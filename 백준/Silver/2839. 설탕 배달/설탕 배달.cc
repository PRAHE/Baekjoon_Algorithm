#include <iostream>
using namespace std;


int calculate(int N) {
	int loop = N / 5;
	if (loop == 0) {
		if (N % 3 == 0) {
			return N / 3;
		}
		else return -1;
	}
	for (int i = loop; i >=0; i--) {
		int tst = N;
		tst = tst - 5 * i;
		if (tst % 3 == 0) {
			return i + (tst / 3);
		}
	}
	return -1;

}

int main() {
	int N;

	cin >> N;

	cout << calculate(N) << endl;

	return 0;
}

