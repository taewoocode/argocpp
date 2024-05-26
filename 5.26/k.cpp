#include <bits/stdc++.h>
using namespace std;
int a[3] {1,2,3};
int main(){

    int *c = a;
    cout << c << '\n'; //123
    cout << &a[0] << '\n'; //0번째 주소값 출력
    cout << c + 1 << '\n'; // 1231
    cout << &a[1] << '\n'; //1번째 주소값 출력

    return 0;
}