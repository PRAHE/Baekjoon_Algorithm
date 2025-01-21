#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt=1; int tmp=1;
    while(tmp<N) {
        tmp += 6*cnt;
        cnt++;
    }
    cout << cnt;
    return 0;
}