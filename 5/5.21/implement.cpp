#include <bits/stdc++.h>
using namespace std;
string dopa = "abcde";
int main(){
    //3개출력
    cout << dopa.substr(0,3) << '\n'; //substr(위치, 크기)
    //거꾸로 출력
    reverse(dopa.begin(), dopa.end()); //reverse는 void형이다.
    cout << dopa << '\n';
    //엄준식 추가
    cout << dopa + "umzunsick" << '\n';
    return 0;
}