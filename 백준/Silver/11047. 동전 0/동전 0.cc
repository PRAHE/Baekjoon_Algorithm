#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int coin[N];
    for(int i=0; i<N; i++) {
        cin >> coin[i];
    }
    int t=N-1;
    int cnt=0;
    while(K>0) {
        while(coin[t] <= K) {
            K -= coin[t];
            cnt++;
        }
        t--;
    }

    cout << cnt;
    return 0;
}