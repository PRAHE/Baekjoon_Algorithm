#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; 

    cin >> N;

    string s =  to_string(N);
    int length = s.length();
    int sum = 9*(length-1);
    sum += s[0]-'0'-1;
    if(length == 1) { sum = N-1; }
  
    for(int i=sum; i>=1; i--) {
        int left = N-i;
        int tmp = left;
        int total = 0; // tmp의 각 자리수의 합
        for(int i=0; i<length; i++) {
            int sqr = 1;
            for(int k=length-i; k>1; k--) {
                sqr *= 10;
            }
            total += tmp/sqr;
            tmp -= (tmp/sqr) * sqr;
        }
        if(N == total+left) {
            cout << left;
            return 0;
        }
    }
    cout << 0;
    return 0;
}