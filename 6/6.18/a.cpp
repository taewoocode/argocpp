/*
콜라츠 추측 알고리즘
입력 n의 값에 상관없이 앞의 알고리즘을 거치면 1이 된다는 의미
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    while(true) {
        cout << n << ' ';
        if(n == 1) break;
        if(n % 2 == 0)  n /= 2;
        else{
            n = n * 3 + 1;
        }
    }
    cout << '\n';
    return 0;
}