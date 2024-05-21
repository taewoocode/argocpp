#include <bits/stdc++.h>
using namespace std;
int a[9], sum;
pair<int,int> ret; //2개를 집어넣는 자료구조
vector<int> v;

void solve(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < i; j ++){
            if(sum - a[i] - a[j] == 100) {
                ret = {i, j};
                return;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        
    }
    sort(a, a + 9); //a라는 배열을 9번째요소까지 오름차순 정렬
    do{
        for(int i : a)cout << i << " ";
        cout << '\n';
        int sum = 0; //sum을 0으로 초기화 한다. 
        for(int i = 0; i < 7; i++){ // 
            if(sum == 100) break; // 더하기가 100이면 멈
        }
    }while(next_permutation(a, a+9));
    for(int i =0; i < 7; i++) cout << a[i] << '\n';

    solve();
    for(int i = 0; i < 9; i++){
        if(ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << " ";
    }

    return 0;

}