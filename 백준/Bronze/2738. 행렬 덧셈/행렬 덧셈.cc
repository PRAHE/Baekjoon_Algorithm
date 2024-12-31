#include <iostream>
using namespace std;

int main(){
    int N,M;
    int A,B;
    cin>>N>>M;
    int** arr = new int*[N*2];
    for(int i=0; i<N*2; i++) {
        arr[i] = new int[M];
    }

    for(int i=0; i<N*2; i++) {
        for(int j=0; j<M; j++) {
            cin>>arr[i][j];        
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << arr[i+N][j] + arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0; i<N*2; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}