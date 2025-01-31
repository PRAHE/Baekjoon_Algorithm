#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    vector<int> nums;    
    for(int i=0; i<N; i++) {
        cin >> M;
        nums.push_back(M);    
    }
    sort(nums.begin(), nums.end());
    int max = nums.at(nums.size()-1);

    float sum=0;
    for(int i=0; i<N; i++) {
        sum += ((float)nums[i]/max)*100;
    }
    cout << (float)sum/N;
    return 0;
}