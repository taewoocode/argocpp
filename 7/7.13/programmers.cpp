#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string answer = "ABCDEFG";
    cout << answer.substr() << '\n'; //문자열 그대로 반환
    cout << answer.substr(1) << '\n'; //인덱스 1부터 마지막까지 반환
    cout << answer.substr(1,4) << '\n'; //인덱스2부터 크기가  CDE

}