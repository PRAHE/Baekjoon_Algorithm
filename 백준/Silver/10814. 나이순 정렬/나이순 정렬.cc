//DID REFER
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}

int main() {
    int num;
    cin >> num;
    pair<int,string> tmp;
    vector<pair<int,string>> arr;
    for(int i = 0; i < num; i++)
    {
        cin >> tmp.first >> tmp.second;
        arr.push_back(tmp);
    }
    //크기가 같은 원소들의 상대적 위치가 바뀌지 않는 정렬.
    stable_sort(arr.begin(),arr.end(),compare);
    for(int i = 0; i < num; i++)
        cout << arr[i].first << ' ' << arr[i].second << '\n';
}