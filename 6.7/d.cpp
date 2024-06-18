#include<bits/stdc++.h>
using namespace std;
bool main(string s){
    bool answer = true;
    int p = 0; //카운팅 준비
    int y = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'p' || s[i] == 'P'){
            p++;
        } else if(s[i] == 'y' || s[i] == 'Y'){
            y++;
        }
    }
    if(p != y){
        return false;
    } else return true;

    return 0;

}