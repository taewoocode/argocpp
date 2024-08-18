#include<bits/stdc++.h>
using namespace std;
int n,m,sum,ret;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m;
    vector<int> v(n);
    //n장 중에서 3개를 뽑아서 가장 큰 수를 만들어야 한다 단 M을 넘어서는 안된다.
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ret = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < j; k++){
                if(sum <= m){
                    ret = max(ret, sum);
                }
            }
        }
    }
    cout << ret << '\n';
    return 0;
}