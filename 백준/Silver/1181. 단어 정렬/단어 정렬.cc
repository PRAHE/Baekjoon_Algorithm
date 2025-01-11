#include <iostream>
#include <algorithm> // to use sort()
using namespace std;

bool compare(string a, string b) {
    int length_a = a.length();
    int length_b = b.length();

    if(length_a == length_b) {
        return a < b;
    }else {
        return length_a < length_b;
    }
}

int main() {
    int N;
    
    cin >> N;
    string* arr = new string[N];

    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+N, compare);
    
    for(int i=0; i<N-1; i++) {
        if(arr[i] == arr[i+1]) { continue; }
        cout << arr[i] << "\n";
    }
    cout << arr[N-1] << "\n";

    delete[] arr;
    return 0;
}