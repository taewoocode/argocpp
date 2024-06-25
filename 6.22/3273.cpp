#include<bits/stdc++.h>
using namespace std;
int n,ret,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> x;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    //두 포인터가 만나지 않을동안 반복
    while(l < r){
        if(v[l] + v[r] == x){
            r--;
            ret++;
        } else if(v[l] + v[r] > x){
            r--;
        } else if(v[l] + v[r] < x){
            l++;
        }
    }
    cout << ret << '\n';

    return 0;
}


//투포인터 문제, 쌍의 수 구하기