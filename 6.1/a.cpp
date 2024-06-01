#include <bits/stdc++.h>
using namespace std;
string n;
int main(){
    cin >> n;
    if (n.length() > 20) {
        cout << "입력된 문자열이 너무 깁니다. 최대 길이는 20입니다." << endl;
        return 1;
    }
    for(int i = 0; n.length(); i++){
        if(n[i] >= 'a' && n[i] <= 'z'){
            cout << n[i] << ' ';
        }
    }
    return 0;
}