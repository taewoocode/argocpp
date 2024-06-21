#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a[51];
    string ans = "";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < a[0].size(); i++){
        int flag = 0;
        for(int j = 0; j < n - 1; j++){
            if(a[j][i] != a[j+1][i]){
                flag = 1;
                break;
            }
        }
        if(flag){
            ans += a[0][i];
        }
        cout << ans << '\n';
    }
    return 0;
}