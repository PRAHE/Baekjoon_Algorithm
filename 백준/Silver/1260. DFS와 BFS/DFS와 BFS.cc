#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(const Graph& G, int i, vector<bool>& check, vector<int>& res) {
    check[i] = true;
    res.push_back(i);

    for(auto next_i : G[i]) {
        if(check[next_i]) continue;
        dfs(G, next_i, check, res);
    }
}

void bfs(const Graph& G, int i, vector<bool>& check, vector<int>& res) {
    queue<int> pos;
    pos.push(i);
    check[i] = true;

    while(!pos.empty()) {
        i = pos.front();
        res.push_back(i);
        pos.pop();
        
        for(auto next_i : G[i]) {
            if(check[next_i]) continue;
            pos.push(next_i);
            check[next_i] = true;        
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<bool> check;
    vector<int> res;
    int N, M, V;
    cin >> N >> M >> V;

    Graph G(N+1);
    for(int i=0; i<M; i++) {
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        sort(G[a].begin(), G[a].end());
        G[b].push_back(a);
        sort(G[b].begin(), G[b].end());
    }

    check.assign(N+1,false);
    dfs(G,V,check,res); 
    for(auto it=res.begin(); it<res.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    res.clear();
    check.clear();
    check.assign(N+1,false);
    bfs(G,V,check,res);
    for(auto it=res.begin(); it<res.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}