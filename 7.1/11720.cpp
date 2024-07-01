#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin >> t >> s;
    int sum = 0;
    for(int i = 0; i < t; i++){
        sum += s[i] - '0'; //문자를 숫자로 변환하기 위해 0을 빼준다. 
    }
    cout << sum;
    return 0;
}
//문자 0은 아스키코드값 48 문자 5는 53이므로 53 - 48 = 5