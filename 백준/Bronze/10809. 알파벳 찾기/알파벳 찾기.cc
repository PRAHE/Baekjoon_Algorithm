#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    char alphabet = 'a';
    cin >> S;
    while(alphabet <= 'z') {
        if(S.find(alphabet) != string::npos) {
            cout << S.find(alphabet) <<" ";
        }else cout << -1 << " ";
        alphabet++;
    }

    return 0;
}