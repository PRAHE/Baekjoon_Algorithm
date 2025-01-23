#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int M;
    cin >> M;
    string cmd;
    int S=0;
    cin.ignore();

    for(int i=0; i<M; i++) {
        string cmd;
        int num;
        cin >> cmd;

        if(cmd == "add") {
            cin >> num;
            if((S&(1<<num)) == 0) {
                S=S|(1<<num); 
            }
        }else if(cmd == "remove") {
            cin >> num;
            if((S&(1<<num)) != 0) {
                S=S&~(1<<num);
            }
        }else if(cmd == "check") {
            cin >> num;
            if((S&(1<<num)) != 0) {
                cout << 1 << "\n";
            }else cout << 0 << "\n";
        }else if(cmd == "toggle") {
            cin >> num;
            S = S^(1<<num);
        }
        else if(cmd == "all") {
            S=2097151;
        }else {
            S=0;
        }
    }
    return 0;
}

