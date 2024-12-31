#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    string line;
    for(int i=0; i<T; i++) {
        cin >> line;
        int size = line.length();
        cout << line[0] << line[size-1]<<"\n";
    }
    return 0;
}