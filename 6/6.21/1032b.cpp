#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //입력을 받음
    cin >> n;
    v.resize(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    //배열을 비교할 것임 인덱스마다. 비교를 할 문자열을 초기화함. 즉 초기값을 설정해줌
    string a = v[0]; // 첫 번째 인덱스를 비교문자대상으로 잡음
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a.size(); j++){
            if(a[j] != v[i][j]){
                a[j] = '?';
            }
        }
    }
    cout << a << '\n';
    return 0;
}