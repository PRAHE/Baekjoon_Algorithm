#include <iostream>
using namespace std;

int main() {

	int N, M;
	int i, j, k;

	cin >> N >> M;

	int* basket = new int[N];
	for (int m = 0; m < N; m++) {
		basket[m] = 0;
	}

	for (int m = 0; m < M; m++) {
		cin >> i >> j >> k;
		for (int q = i - 1; q < j; q++) {
			basket[q] = k;
		}
	}

	for (int m = 0; m < N; m++) {
		cout << basket[m] << ' ';
	}

	delete[] basket;
	return 0;
}