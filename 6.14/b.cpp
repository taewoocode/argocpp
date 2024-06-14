#include<bits/stdc++.h>
using namespace std;
int main(){
    int S = 18; //10010
    int idx = 1; 
    S &= ~(1 << idx); //10010 << leftshift 1번째 비트를 왼쪽으로 1칸 이동시켜라 
    cout << S << '\n';
    return 0;
}

/*
만약 idx값이 2였다면 왼쪽으로 2칸을 이동시키게 된다.


*/