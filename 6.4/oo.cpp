#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,1,2,1};
    int cnt = count(v.begin(), v.end(), 1); //벡터의 시작과 끝에서 1이 몇번 나왔는지 체크한다.
    cout << cnt << '\n';
}