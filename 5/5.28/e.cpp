//1-k 1213
#include <bits/stdc++.h>
using namespace std;
int cnt[200], flag;
string s, ret;
char mid;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> s;
    for(char a : s) cnt[a]++;
    for(int i = 'Z'; i >= 'A'; i--){
        if(cnt[i]){
            if(cnt[i] & 1){
                mid = char(i); flag++;
                cnt[i]--;
            }
            if(flag == 2)break;
            for(int j = 0; j < cnt[i]; j += 2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    return 0;
}