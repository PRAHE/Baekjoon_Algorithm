#include <iostream>
#include <string>
using namespace std;

int calculate(int A, int B) {
    return (A+B)*(A-B);
}
int main(){
    int A,B;
    cin >> A >> B;
    cout << calculate(A,B);
    return 0;
}