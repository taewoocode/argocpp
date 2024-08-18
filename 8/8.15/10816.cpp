#include <bits/stdc++.h>
using namespace std;

const int MAX = 500000;  
int n, m, num;                    
unordered_map<int, int> c;  
vector<int> v(MAX);     
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        c[num]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> v[i];
    }
    for(int i = 0; i < m; i++){
        cout << c[v[i]] << ' ';
    }
    cout << '\n';

    return 0;
}