#include <iostream>
using namespace std;

int main(){
    long int N, M;
    cin >> N >> M;

    if(N<M) {
        cout<<M-N<<endl;
    }else {
        cout<<N-M<<endl;
    }
    return 0;
}