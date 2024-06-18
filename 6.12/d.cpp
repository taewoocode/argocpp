#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
bool check(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int go(int idx, int sum){
    if(idx == n){
        return check(sum);
    }
    return go(idx + 1, sum + v[idx] + go(idx + 1, sum));
}

int main(){
    cin >> n;
}