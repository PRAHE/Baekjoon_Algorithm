#include <iostream>
using namespace std;

int main(){
    int N;
    int size[6]; int P; int T;

    cin >> N;
    for(int i=0; i<6; i++) {
        cin >> size[i];
    }
    cin >> T >> P;

    int sum=0;
    for(int i=0; i<6; i++) {
        if(size[i]%T == 0) {
            sum += size[i]/T;
        }else{
            sum += size[i]/T + 1;
        }
    }
    cout << sum <<"\n";
    cout << N/P << " " << N%P;
    return 0;
}