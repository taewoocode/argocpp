/*
최하위 비트찾기
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s = 18;
    int idx = (s & -s);
    cout << idx << '\n'; //2
    return 0;
}