#include<bits/stdc++.h>
using namespace std;
int main(){
    int idx = 1;
    int S = 18;
    S &= ~(1 << idx); //1을 1만큼 이동 하면 ? 10 이 된다. 그럼 00010 이기 때문에 ~에 의해 뒤집으면 11101이 되고 &연산자로 처리
    cout << S << '\n';
    return 0;
}