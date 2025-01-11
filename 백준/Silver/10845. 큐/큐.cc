#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    int N;
    queue <int> q;
    
    cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++) {
        string cmd;
        getline(cin,cmd);
        if(cmd.find("push") != string::npos) {
            string n = cmd.substr(cmd.find(" "));
            int num = stoi(n);
            q.push(num);
            continue;
        }else if(cmd.find("front") != string::npos) {
            if(q.empty()) {
                cout << -1;
            }else {cout << q.front();}
        }else if(cmd.find("back") != string::npos) {
            if(q.empty()) {
                cout << -1;
            }else {cout << q.back();}
        }else if(cmd.find("pop") != string::npos) {
            if(q.empty()) {
                cout << -1;
            }else{ 
                cout << q.front();
                q.pop();
            }
        }else if(cmd.find("size") != string::npos) {
            cout << q.size();
        }else if(cmd.find("empty") != string::npos) {
            if(q.empty()) {
                cout << 1;
            }else {
                cout << 0;
            }
        }
        if(i != N-1) {
            cout << "\n";
        }
    }
    return 0;
}