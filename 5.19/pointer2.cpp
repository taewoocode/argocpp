#include <bits/stdc++.h>
using namespace std;
int main(){
    int var = 10;
    int* p = &var;
    cout << p << '\n'; //주소를 가르킨다.
    cout << *p << '\n'; //역참조로 값을 가르킨다.
    cout << p << '\n';
    
    *p = 20;
    cout << *p << endl;
    *p = 30;
    cout << *p << endl;
    *p = 40;
    cout << *p << endl;

    
    return 0;
}