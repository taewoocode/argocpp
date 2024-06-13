#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 7;
    cout << (a << 1) << ' ';
    int b = 7;
    b = b << 1; //left shift 한 값을 다시 b에다가 저장한다.
    cout << b << ' ';
    return 0;
}