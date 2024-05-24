#include <bits/stdc++.h>
using namespace std;
int a;

//배수인지 확인하려면 나머지 연산자를 사용해야 한다.
int main() {
    int a;
    cin >> a;

    // 2의 배수인지 검사
    if(a % 2 == 0) {
        cout << a << "는 2의 배수입니다." << '\n';
    }

    // 3의 배수인지 검사
    if(a % 3 == 0) {
        cout << a << "는 3의 배수입니다." << '\n';
    }

    // 5의 배수인지 검사
    if(a % 5 == 0) {
        cout << a << "는 5의 배수입니다." << '\n';
    }

    return 0;
}