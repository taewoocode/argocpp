#include<bits/stdc++.h>
using namespace std;
int n,m, num;
unordered_set<int> s;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        s.insert(num);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int q;
        cin >> q;
        if(s.find(q) != s.end()){
            cout << 1 << '\n';
        } else cout << 0 << '\n';
    }
    return 0;
}