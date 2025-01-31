#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int L, P, V;
    int i=1;
    while(1) {
        cin >> L >> P >> V;
        if(L==0&&P==0&&V==0) { return 0; }
        int day = V/P;
        int result;
        if(V%P>=L) {
            result = L*day + L;
        }else if(V%P>0) {
            result = L*day + (V%P);
        }else {
            result = L*day;
        }
        cout << "Case " << i++ << ": " << result << "\n";
    }
    return 0;
}