#include <iostream>
using namespace std;

void dfs(int k, int q, bool field[51][51], int M, int N) {
    int xx[4] = {-1, 1, 0, 0};
    int yy[4] = {0, 0 , -1, 1};

    field[k][q] = 0;
    for(int i=0; i<4; i++) {
        int nx = k+xx[i];
        int ny = q+yy[i];
        if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
        
        if(field[nx][ny]) {
            dfs(nx,ny,field,M,N);
        }
    }
}

int main() {
    int T;
    int X,Y;
    int M,N,K;

    bool field[51][51] ={0,};

    cin >> T;
    for(int i=0; i<T; i++) {
        int cnt=0;

        cin >> M >> N >> K; 
        for(int t=0; t<K; t++) {
            cin >> X >> Y;
            field[Y][X] = 1;
        }
        
        for(int k=0; k<N; k++) {
            for(int q=0; q<M; q++) {
                if(field[k][q]) {
                    dfs(k,q,field,M,N);
                    cnt++;
                    
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}