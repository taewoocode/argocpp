#include <bits/stdc++.h>
using namespace std;
int N, M;
void solve(int N, int M){
    int a = 1;
    for(int i = 0; i < N; i++){ //N번 만큼 반복
        a *= i;
    }
    for(int j = 0; j < M; j++){ //M번 만큼 반복
        a *= j;
    }
    cout << a << '\n';
}
int main(){
    cin >> N >> M;
    solve(N, M);
    return 0;
}