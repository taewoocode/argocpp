#include <bits/stdc++.h>
using namespace std;
int n, cnt[26];
string s, ret;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        cnt[s[0] - 'a']++; //첫번째 발생횟수의 문자열을 증가시킨다.
    }
    //5번 이상 발생한 문자를 확인해야함.
    for(int i = 0; i < 26; i++){
        //조건문시작 -> 제어문
        if(cnt[i] >= 5){
            ret += char(i + 'a'); //ret이 string형 이기 때문이다.
        }
    }
    //
    if(ret.size()) cout << ret << '\n';
    else cout << "PARADAJA" << '\n';

    return 0;
}