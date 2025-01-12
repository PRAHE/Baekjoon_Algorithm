#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int* arr = new int[N+1];

    for(int i=2; i<=N; i++) {
        arr[i] = i;
    }

    for(int i=2; i<=N; i++) {
        if(arr[i]==0) continue;

        for(int j=2*i; j<=N; j+=i) {
            arr[j] = 0;
        }
    }

    for(int i=M; i<=N; i++) {
        if(arr[i] != 0) {
            cout << arr[i] << "\n";
        }
    }

    return 0;
}