#include <iostream>
using namespace std;

//유클리드 호제법
int gcd(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return a*b/gcd(a,b);
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a,b) << "\n";
    cout << lcm(a,b);

    return 0;
}