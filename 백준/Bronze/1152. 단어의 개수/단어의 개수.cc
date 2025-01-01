#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    int count = 0;
    bool word = false;
    getline(cin,line);

    for(int i=0; i<line.length(); i++) {
        if(line[i] != ' ') {
            word = true;
        }
        while(word) {
            if(i == line.length()-1) {word = false; count++;}
            i++;
            if(line[i] == ' ') { word = false; count++; }
        }
    }
    cout << count;
    return 0;
}