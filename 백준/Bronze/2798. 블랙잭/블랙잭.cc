#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int* card = new int[N];
    for(int i=0; i<N; i++) {
        cin >> card[i];
    }
    int max=1;
    for(int i=0; i<N-2; i++) {
        for(int k=i+1; k<N-1; k++) {
            for(int j=k+1; j<N; j++) {
                int sum = card[i] + (card[k]+card[j]);
                if(M>=sum && max<sum) {max = sum;}
            }
        }
    }
    cout << max;

    delete[] card;
    return 0;
}