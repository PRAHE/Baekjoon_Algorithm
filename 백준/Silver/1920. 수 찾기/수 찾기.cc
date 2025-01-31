#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N; int M;
    int tmp;
    cin >> N;
    vector<int> nums;
    for(int i=0; i<N; i++) {
        cin >> tmp;
        nums.push_back(tmp);
    }
    sort(nums.begin(),nums.end());
    cin >> M;
    int b;
    for(int i=0; i<M; i++) {
        cin >> b;
        bool isFound = binary_search(nums.begin(), nums.end(), b);
        cout << isFound << "\n";
    }

    return 0;
}