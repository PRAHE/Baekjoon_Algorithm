#include <iostream>
#include <string>
using namespace std;

int main(){
    int A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;

    int result = A*B*C;
    string s = to_string(result);
    int* num = new int[10]();

    for(int i=0; i<s.length(); i++) {
        num[s[i]-'0']++;
    }
    for(int i=0; i<10; i++) {
        cout << num[i] << "\n";
    }

    delete[] num;
    return 0;
}