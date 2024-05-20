#include<bits/stdc++.h>
using namespace std;
int n, a[1004], cnt;
int go(int l, int r){
    cnt++;
    if(l == r) return a[l];
    int mid = (l + r) / 2;
    int sum = go(l, mid) + go(mid + 1, r); //재귀함수
    return sum;
    //go 함수가 몇번 호출됬는지가 이 함수의 핵심이다.
    //n이 5일 때 (0,4)
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i - 1] = i;
    }
    int sum = go(0, n - 1);
    cout << sum << '\n';

    //debuging code
    cout << "cnt: " << cnt << '\n';
}

