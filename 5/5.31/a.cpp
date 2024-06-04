#include <bits/stdc++.h>
using namespace std;
int n, m, a[15001], cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i]; //포문 0부터 입력받은 n까지 돌 때 마다, 배열에 저장 index[0]부터 저장됨
        if(m > 200000){ //n이 20만 보다 크다면 
            cout << 0 << '\n'; // 그냥 0을 출력하고
        } else { //그게 아니라면 ? 아래의 로직을 실행한다.
        
        //2개를 고르는 것이니까 중첩 for문으로 아래의 로직을 실행한다. 3개까지 중첩for문으로 콤비네이션을 구현할 수 있다.
            for(int i = 0; i < n; i++){
                for(int j = i + 1; i < n; j++){
                    if(a[i] + a[j] == m){ // 2개의 재료를 합해서 m과 같다면 ? 카운트 1증가.
                        cnt++;
                    }
                }
            }
            cout << cnt << '\n';
        }
    }
}