#include <iostream>
using namespace std;

int main() {

	int N, M;
	int i, j;
	int tmp = 0;

	cin >> N >> M;

	int* basket = new int[N];
	for (int m = 0; m < N; m++) {
		basket[m] = m+1;
	}

	for (int m = 0; m < M; m++) {
		cin >> i >> j;

		tmp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = tmp;
	}

	for (int m = 0; m < N; m++) {
		cout << basket[m] << ' ';
	}

	delete[] basket;
	return 0;
}
