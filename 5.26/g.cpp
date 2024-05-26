// N : 1 ~ 10만
// k : ~ ~ 10만
//온도는 -100 ~ 100
//연속의 온도의 합이 최대가 되는 값 구간합 : prefix sum : psum[i] = psum + a[i]
//이 문제의 최솟값
//어디서 부터?

//ret = max(ret, value)
//ret = min(ret, value)

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, k, temp, psum[1000001], ret = -10000004;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin >> temp; psum[i] = psum[i - 1] + temp;
    }
    for(int i = k; i <= n; i++){
        ret = max(ret, psum[i] - psum[i - k]);
    }
    cout << ret << '\n';
    return 0;
}
