#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int H, W, N;
        cin >> H >> W >> N;

        int floor = N%H;
        int num = N/H+1;
        if(floor==0) { 
            floor = H;
            num--;
        }
        cout << floor*100 + num << "\n";
    }

    return 0;
}