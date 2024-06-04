#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "abcde";
    string *b = &a;
    cout << b << '\n'; //주소 a의 주소를 담고있음
    cout << &b << '\n'; //주소 b의 주소를 담고 있음
    cout << *b << '\n';  //abcde
    return 0;
}