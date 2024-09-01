#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int com;
	int x;
	string str;
	int result;

	cin >> com;


	for (int i = 0; i < com; i++) {
		cin >> str;

		if (str == "push") {
			cin >> x;
			s.push(x);
		}
		else if (str == "pop") {
			if (s.empty()) {
				result = -1;
				cout << result << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (str == "size") {
			result = s.size();
			cout << result << endl;
		}
		else if (str == "empty") {
			if (s.empty())
				result = 1;
			else
				result = 0;
			cout << result << endl;

		}
		else if (str == "top") {
			if (s.empty()) {
				result = -1;
				cout << result << endl;
			}
			else {
				cout << s.top() << endl;
			}
		}
	}
}