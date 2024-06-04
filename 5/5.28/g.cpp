#include <bits/stdc++.h>
using namespace std;
int main(){
    int v[3] {1,2,3};
    int ret[3];
    memcpy(ret, v, sizeof(v));
    cout << ret[1] << '\n'; //2
    ret[1] = 100;
    cout << ret[1] << '\n'; //100
    cout << v[1] << '\n'; // 2

    return 0;
}