#include<bits/stdc++.h>
using namespace std;
//prefixsum
/*
구간합은 정적배열을 이용한다.
*/
int a[100004], psum[100004],n,m,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    
    }
    for(int i = 0; i < m; i++){
        cin >> b >> c;
        cout << psum[c] - psum[b - 1] << '\n';
    }
    return 0;
}