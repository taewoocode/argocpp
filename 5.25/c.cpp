#include <bits/stdc++.h>
using namespace std;
int a, b;
int main(){
    cin >> a;
    cin >> b;
    if(a > b){
         cout << "큰 수는" << a << '\n';
    } else if (a < b){
         cout << "큰 수는" << b << '\n';
    } else if (a == b) {
         cout << "두수는 같다." << '\n';
    }
    return 0;
}