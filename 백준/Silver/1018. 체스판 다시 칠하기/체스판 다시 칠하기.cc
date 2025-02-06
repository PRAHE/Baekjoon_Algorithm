#include <iostream>
#include <algorithm>
using namespace std;
    
char board[51][51];

int check(char color, int x, int y) {
    int cnt=0;
    for(int m=x; m<x+8; m++) {
        for(int k=y; k<y+8; k++) {
            int check = (m+k)%2;
            if(!check) {
                if(board[m][k] != color) cnt++;
            }
            else {
                if(board[m][k] == color) cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int N,M;
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        for(int k=0; k<M; k++) {
            cin >> board[i][k];
        }
    }

    int minimum = 100;
    for(int i=0; i<N-7; i++) {
        for(int k=0; k<M-7; k++) {
            int count1 = check('B',i,k);
            int count2 = check('W',i,k);
            count1 = min(count1, count2);
            minimum = min(minimum, count1);
        }
    }   
    cout << minimum;
    return 0;
}