#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "abcde";
    string *b = &a; //b는 a의 주소를 가르키고 있음
    cout << b << '\n';
    cout << *b << '\n';

    return 0;
}