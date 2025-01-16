#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x[N], y[N];
    int result[N];

    for(int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<N; i++) {
        int cnt =0; 
        for(int j=0; j<N; j++) {
            if(i==j) continue;
            if(x[i] < x[j]) {
                if(y[i] < y[j]) {
                    cnt++;
                }
            }
        }
        result[i] = cnt+1;
    }

    for(int i=0; i<N; i++) {
        cout << result[i] << " ";
    }

    return 0;
}