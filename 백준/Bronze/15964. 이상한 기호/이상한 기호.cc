#include <iostream>
#include <string>
using namespace std;

long long int calculate(long int A, long int B) {
    return (A+B)*(A-B);
}
int main(){
    long int A,B;
    cin >> A >> B;
    cout << calculate(A,B);
    return 0;
}