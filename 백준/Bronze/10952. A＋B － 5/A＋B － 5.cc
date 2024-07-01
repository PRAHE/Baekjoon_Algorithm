#include <iostream>
using namespace std;

int main() {
	int A, B;

	while (1) {
		cin >> A >> B;
		if (A + B != 0) {
			cout << A + B << endl;
		}
		else
			return 0;
	}
}