#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int N;
    stack<int> st;
    queue<char> q;

    cin >> N;
    int* num = new int[N];

    for(int i=0; i<N; i++) {
        cin >> num[i];
    }
    
    int elm = 1;
    st.push(0); 
    for(int i=0; i<N; i++) {
        while(num[i] > st.top()) {
            st.push(elm); q.push('+');
            elm++;
        }
        if(num[i] == st.top()) {
            st.pop(); q.push('-');
            
        }else {
            cout << "NO" << "\n";
            return 0;
        }
    }

    while(!q.empty()) {
        cout << q.front() << "\n";
        q.pop();
    }
    return 0;
}