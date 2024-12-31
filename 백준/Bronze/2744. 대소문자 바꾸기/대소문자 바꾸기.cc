#include <iostream>
using namespace std;

int main(){
    char word[100];
    cin>>word;
    for(int i=0; i<sizeof(word); i++) {
        if(word[i]>='a'&&word[i]<='z') {word[i] -= 32;}
        else if(word[i]>='A'&&word[i]<='Z') {word[i] += 32;}
    }
    cout<<word;
    return 0;
}