#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;
    char c; 
    unsigned long long r=1;
    unsigned long long result=0;
    for(int i=0; i<L; i++) {
        cin >> c;
        result += ((c-96)*r) % 1234567891;
        result %= 1234567891;
        r = (r*31) % 1234567891;
    }
    cout << result;
    return 0;
}