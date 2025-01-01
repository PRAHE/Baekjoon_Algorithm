#include <iostream>
using namespace std;

int main(){
    int N;
    int result = 0;
    cin >> N;
    char* number = new char[N];
    cin >> number;
    for(int i=0; i<N; i++) {
        result += number[i]-'0';
    }
    cout<<result;
    return 0;
}