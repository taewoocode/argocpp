#include <bits/stdc++.h>
using namespace std;

//절대값
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