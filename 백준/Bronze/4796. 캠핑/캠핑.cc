#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int L, P, V;
    int i=1;
    while(1) {
        cin >> L >> P >> V;
        if(L==0&&P==0&&V==0) { return 0; }
        int day = V/P;
        int result;
        int remain = V%P;
        if(remain>=L) {
            result = L*day + L;
        }else if(remain>=0) {
            result = L*day + (remain);
        }
        cout << "Case " << i++ << ": " << result << "\n";
    }
    return 0;
}