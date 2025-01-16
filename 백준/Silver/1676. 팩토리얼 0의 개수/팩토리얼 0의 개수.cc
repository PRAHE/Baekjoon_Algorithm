#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt_5 = 0;
    int cnt_2 = 0;
    cin >> N;
    
    for(int i=1; i<=N; i++) {
        int num=i;
        while(num%5 == 0) {
            cnt_5++;
            num=num/5;
        }
        num = i;
        while(num%2 == 0) {
            cnt_2++;
            num=num/2;
        }
    }

    cout << min(cnt_5, cnt_2);
    return 0;
}