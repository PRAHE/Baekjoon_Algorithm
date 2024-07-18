#include <iostream>
using namespace std;

int main() {
	int array[9] = { 0, };
	int index = 1;

	for (int i = 0; i < 9; i++) {
		cin >> array[i];
	}

	int max = array[0];

	for (int i = 1; i < 9; i++) {
		if (max < array[i]) {
			max = array[i];
			index = i + 1;
		}
	}

	cout << max << endl;
	cout << index << endl;
	return 0;
}