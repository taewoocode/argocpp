#include <bits/stdc++.h>
using namespace std;
int a[100004], b, c, psum[100004], n, m;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i]; //이전까지의 누적합에 현재위치에 누적합을 더한다 psum[5] = psum[4] + a[5]
        //psum[i-1]인 이유는 배열의 인덱스는 1번부터 시작하기 때문이다 배열의 인덱스가 0번부터 시작하게 된다면 -1인덱스가 생기는데 
        //-1인덱스는 존재하지 않는다
    }
    for(int i = 0; i < m; i++){
        cin >> b >> c;
        cout << psum[c] - psum[b - 1] << '\n';
    }
    return 0;
}