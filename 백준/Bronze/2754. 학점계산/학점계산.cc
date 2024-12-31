#include <iostream>
using namespace std;

int main(){
    char score[3];
    double point = 0.0;
    cin >> score;

    if(score[0] == 'A') {point += 4.0;}
    else if(score[0] == 'B') {point += 3.0;}
    else if(score[0] == 'C') {point += 2.0;}
    else if(score[0] == 'D') {point += 1.0;}

    if(score[1] == '+') {point += 0.3;}
    else if(score[1] == '-') {point -= 0.3;}
    
    cout << fixed;
    cout.precision(1);
    cout<<point;
    return 0;
}