#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
map<string, int> mp;
map<int, string> mp2;
string a[100004];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s; //Bulbasaur
        mp[s] = i + 1;  // 1 mp[Bulbasaur] = 1;
        mp2[i + 1] = s; //mp[1] = Bulbasaur
        a[i + 1] = s; // a[0] = bulbasaur
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        if(atoi(s.c_str()) == 0){ //만약에 0이다 -> 문자열
            cout << mp[s] << '\n';
        } else {
            //cout << a[atoi(s.c_str())] << '\n';
            cout << mp2[atoi(s.c_str())] << '\n';
        }
    }
    return 0;
}