#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T; int N;
    cin >> T;
    pair<int,int> arr[41];
    arr[0] = {1,0};
    arr[1] = {0,1};

    for(int i=2; i<41; i++) {
        arr[i].first = arr[i-1].first+arr[i-2].first;
        arr[i].second = arr[i-1].second+arr[i-2].second;        
    }

    for(int i=0; i<T; i++) {
        cin >> N;
        cout << arr[N].first << " " << arr[N].second << "\n";
    }
    return 0;
}

