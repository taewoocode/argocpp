#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "kundol";
    string *b = &a; // a의 주소값을 가르키는 포인터 b 선언
    cout << b << '\n';
    cout << *b << '\n';
    cout << *b << '\n';

    return 0;
}