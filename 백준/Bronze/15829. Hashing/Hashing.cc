#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;
    char c; int r=1;
    int result=0;
    for(int i=0; i<L; i++) {
        cin >> c;
        int sum=1;
        for(int j=0; j<i; j++) {
            sum*=31;
        }
        result += (c-96)*sum;
    }
    cout << result % 1234567891;
    return 0;
}