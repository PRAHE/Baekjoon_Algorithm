#include <iostream>
using namespace std;

int main(){
    int T;
    string result;

    cin >> T;
    for(int i=0; i<T; i++) {
        cin >> result;
        int cir = 0; int score = 0;
        for(int j=0; j<result.length(); j++) {
            if(result[j] == 'O') {
                cir++;
                score += cir;
            }else cir = 0;
        }
        cout << score << "\n";
    }

    return 0;
}