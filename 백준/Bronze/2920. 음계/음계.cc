#include <iostream>
using namespace std;

int main(){
    int sound;
    int pre_sound;
    bool asc = true;
    bool des = true;

    cin >> pre_sound;
    while(cin >> sound) {
        if(pre_sound+1 == sound) {
            des = false;
        }else if(pre_sound-1 == sound) {
            asc = false;
        }else {
            cout << "mixed"; return 0;
        }
        pre_sound = sound;
    }
    if(asc == true) cout << "ascending";
    else if(des == true) cout << "descending";

    return 0;
}