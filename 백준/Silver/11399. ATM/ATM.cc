#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int* P = new int[N];
    for(int i=0; i<N; i++) {
        cin >> P[i];
    }
    sort(P,P+N);

    int sum = 0;
    for(int i=1; i<N; i++) {
        P[i] = P[i-1] + P[i];
    }

    for(int i=0; i<N; i++) {
        sum += P[i];
    }
    cout << sum;
    return 0;
}