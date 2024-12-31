#include <iostream>
using namespace std;

int main(){
    int N;
    int result=1;
    cin>>N;
    for(int i=1; i<=N; i++){
        result = result*i;
    }
    cout<<result<<"\n";
    return 0;
}