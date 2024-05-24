#include <bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cin >> a;
    if(a >= 'a' && a <= 'z'){
        cout << "소문자" << '\n';
    } else if(a >= 'A' && a <= 'Z'){
        cout << "대문자" << '\n';
    } else {
        cout << "알파벳이 아니다." << '\n';
    }

    return 0;
}