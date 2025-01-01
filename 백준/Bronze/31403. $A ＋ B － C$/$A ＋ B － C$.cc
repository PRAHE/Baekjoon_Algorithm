#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cin >> A; cin >> B; cin >> C;
    cout << A+B-C << "\n";

    string s = to_string(A);
    string s1 = to_string(B);
    s = s+s1;

    A = stoi(s);
    cout << A-C;

    return 0;
}