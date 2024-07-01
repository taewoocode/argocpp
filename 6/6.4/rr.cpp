#include<bits/stdc++.h>
using namespace std;
int cnt[26];
string s = "hello world";
int main(){
    for(char a : s){
        if(a >= 'a' && a <= 'z'){
            cnt[a - 'a']++;
        }
    }
    for(char a = 'a'; a <= 'z'; a++){
        if(cnt[a - 'a'] > 0) {
            cout << cnt[a -'a']<< ' ';
        }
    }
    
    return 0;
}