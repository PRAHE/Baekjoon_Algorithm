#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int N, M;
    map<string,int> map;
    vector<string> vt;
    cin >> N >> M;
    
    for(int i=0; i<N+M; i++){
        string name;
        cin >> name;
        map[name]++;
        if(map[name] > 1) vt.push_back(name);
    }
    sort(vt.begin(), vt.end());
    cout << vt.size() << '\n';
    for(auto o : vt)
        cout << o << '\n';
}