#include <bits/stdc++.h>
using namespace std;
string temp, s;
int main(){
    cin >> s; //배열을 입력받는다. ex) asd
    temp = s; //그리고 원본배열을 temp라는 변수에 임의로 저장해 놓는다. temp = asd
    reverse(temp.begin(), temp.end()); //임시변수의 시작과 끝을 reverse시킨다. dsa
    if(temp == s) cout << 1 << '\n'; //변경한 임시배열이 같으면 1을 출력 dsa == asd 
    else cout << 0 << '\n'; //아니면 0을 출력한다.

    return 0;

}