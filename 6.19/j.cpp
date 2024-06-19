#include<bits/stdc++.h>
using namespace std;
int main(){
    int s = 18;
    int idx = 1;
    s ^= (1 << idx); // 1 -> 1 -> 2 그다음 18과 2의 or연산
    cout << s << '\n';
    return 0;
}
/*
XOR연산은 같은 것을 싫어한다. (1,1), (0,0) 조합은 다 false로 된다.
그 외에는 다 1
*/