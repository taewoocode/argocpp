#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "kundol";
    string *b = &a; // a의 주소값을 가르키는 포인터 b 선언
    cout << b << '\n';
    cout << *b << '\n'; // 역참조 연산자

    int arr[3] = {1, 2, 3};
    int *c = arr;
    cout << c << '\n';
    cout << &arr[0] << '\n';
    cout << c + 1 << '\n';
    cout << &arr[1] << '\n';

    return 0;
}
