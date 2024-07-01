#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int n, a[44], ret = INF;
string s;

void go(int here){
    if(here == n + 1){
        int sum = 0;
        for(int i = 0; i <= (1 <<( n - 1)); i *= 2){
            int cnt = 0;
            for(int j = 0; j <=n; j++){
                if(a[j] & i ) cnt++;
                sum += min(cnt, n - cnt);
            }
        }
        ret = min(ret,sum);
        return;
    }
    go(here + 1);
    a[here] = ~a[here];
    go(here + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s;
        int value =1;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == 'T'){
                a[i] |= value;
            }
            value *= 2;
        }
    }
    for(int i = 1; i < n; i++) cout << a[i] << " ";
    go(1);
    cout << ret << '\n';
    return 0;
}