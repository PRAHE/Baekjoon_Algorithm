#include <iostream>
#include <string>
using namespace std;

void check(string ques) {
	int left = 0;
	int right = 0;
	bool set = 0;

	for (int i = 0; i < ques.length(); i++) {

		if (ques.find("(",i) == i) { 
			left++;
		}
		if (ques.find(")",i) == i) {
			right++;
			if (i == ques.length() - 1) {
				set = 1;
			}
		}
		if (left < right) { cout << "NO" << endl; return; }
	}

	if (left == right && set == 1) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
}

int main() {
	int line;
	string ques;

	cin >> line;

	while (line >= 1) {
		cin >> ques;
		check(ques);
		line--;
	}
}