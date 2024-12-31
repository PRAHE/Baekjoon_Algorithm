#include <iostream>
using namespace std;

int main(){
    int number;
    int result=0;
    while(cin >> number){
        result += number*number;
    }
    cout<<result%10;
    return 0;
}