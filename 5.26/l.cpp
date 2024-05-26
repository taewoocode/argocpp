#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "abcde";
    string *b = &a;
    cout << b << '\n'; //주소
    cout << &b << '\n'; //주소
    cout << *b << '\n';  //abcde
    return 0;
}