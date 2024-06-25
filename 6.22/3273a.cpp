#include<bits/stdc++.h>
using namespace std;
int n,x,ret;
int main(){
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    //찾아야 하는 수
    cin >> x;
    int l = 0, r = n - 1;

    while(l < r){
        if(v[l] + v[r] == x){
            r--;
            ret++;
        } else if(v[l] + v[r] < x){
            l++;
        } else if(v[l] + v[r] > x){
            r--;
        }
    }
    cout << ret << '\n';
    return 0;
}