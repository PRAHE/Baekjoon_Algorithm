#include <iostream>
using namespace std;

int main() {
	int A, B;

	while (1) {
		cin >> A >> B;
		if (cin.eof())
			return 0;
		else {
			cout << A + B << endl;
			cin.ignore();
		}
	}

	return 0;
}