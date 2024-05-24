#include <bits/stdc++.h>
using namespace std;
int main(){

    int number;
    cin >> number;
    if(number < 0){
        cout << -number << '\n';
    } else if(number > 0) {
        cout << number << '\n';
    }

    return 0;
}