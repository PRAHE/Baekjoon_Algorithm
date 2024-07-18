#include <iostream>
using namespace std;

int main() {
	int N; int ans; int cnt = 0;
	cin >> N;

	int* array = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	cin >> ans;

	for (int i = 0; i < N; i++) {
		if (ans == array[i]) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}