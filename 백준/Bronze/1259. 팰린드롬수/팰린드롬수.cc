#include <iostream>
#include <string>
using namespace std;

int main() {
    string cmd;

    while(1) {
        bool incorrect = 0;
        cin >> cmd;
        if(cmd == "0") return 0;
        int right = cmd.length()-1;
        int left = 0; 
        
        while(left < right) {
            if(cmd[left] != cmd[right]) {
                incorrect = 1;
                break;
            }else {
                left++; right--;
            }
        }

        if(incorrect) {
            cout << "no" << "\n";
        }else {
            cout << "yes" << "\n";
        }
    }

    return 0;
}