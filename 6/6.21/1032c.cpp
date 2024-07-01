#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    string a = v[0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a.size(); j++){
            if(a[j] != v[i][j]){
                a[j] = '?';
            }
        }
    }
    cout << a << '\n';
    return 0;
}