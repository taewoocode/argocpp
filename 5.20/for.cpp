#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int main(){
    cin >> n;
    int a = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            a += i + j;
            cnt++;
        }
    }
    cout << a << '\n';
    cout << "cnt: " << cnt << '\n';
    return 0;
}