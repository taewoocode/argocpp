#include <bits/stdc++.h>
using namespace std;
typedef long long;
string str;
int cnt[26]; //각 배열의 요소는 0으로 초기화가 되어있다.
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;
    for(char a : str){
        cnt[a - 'a']++;
    }
    for(int i = 0; i < 26; i++) cout << cnt[i] << " ";
    return 0;
}