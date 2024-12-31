#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;

    while(getline(cin,S)){ //공백포함으로 받기 위해선 getline
        cout << S << "\n";
    }
    return 0;
}