/*
idx번째 비트가 켜져있는지 확인하는 방법
if(s&(1 << idx))
1 << 3 은 01000 여기다가 &을 하게 되면
10010
01000 and연산자를 하면?
-------
00000 얘는 0이다.
4번째 자리 확인
1 << 4
10010
10000
--------
10000 -> 16이 됨

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s = 18;
    int idx = 0;
    if(s &= (1 << idx)){ //idx번째 비트가 켜져있는지 확인.
        cout << "해당 idx : " << idx << "가 켜져있습니다.\n";
    } else {
        cout << "해당 idx : " << idx << "가 꺼져있습니다.\n";
    }
    return 0;
}