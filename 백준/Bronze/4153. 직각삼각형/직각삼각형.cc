#include <iostream>
using namespace std;

int main(){
    int t[3];
    while(1) {
        for(int i=0; i<3; i++) {
            cin >> t[i];
        }
        if(t[0]==0 && t[1]==0 && t[2]==0) { break; }

        int result = 0;
        int max = t[0];
        for(int i=1; i<3; i++) {
            if(t[i] < max) {
                result += t[i]*t[i];
            }else {
                result += max*max;
                max = t[i];
            }
        }
        if(max*max == result) { cout << "right" << "\n"; }
        else {cout << "wrong" << "\n"; }
    }
    return 0;
}