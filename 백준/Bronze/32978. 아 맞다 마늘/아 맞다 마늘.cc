#include <iostream>
using namespace std;

int main() {
    int N;
    string line;
    cin >> N;
    
    string* arr = new string[N];
    for(int i=0; i<N; i++) {
        cin >> line;    
        arr[i] = line;
    }

    for(int i=0; i<N-1; i++) {
        cin >> line;
        for(int j=0; j<N; j++) {
            if(arr[j] == line) {
                arr[j] = "0";
            }
        }
    }

    for(int i=0; i<N; i++) {
        if(arr[i] != "0") {
            cout << arr[i];
        }
    }
    return 0;
}