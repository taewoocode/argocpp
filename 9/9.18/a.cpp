#include<bits/stdc++.h>
using namespace std;
//prefixsum
int a[100004], psum[100004],n,m,b,c;
int main(){
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