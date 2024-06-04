#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "나는야";
    cout << a[0] << '\n';
    cout << a[0] << a[1] << a[2] << '\n';
    cout << a << '\n';
    string b = "abc11117";
    cout << b[0] << '\n';
    cout << b[2] << '\n';
    return 0;
}

/*
a[0], a[1] 이런 접근은 1바이트씩 접근하는 것인데 영어는 한 글자당 1바이트이지만 한글은 3바이트이다. 그래서 출력이 되지 않았다.
�
나
나는야
a
c

영어는 출력이 잘 되지만 한글은 출력시 이상한 문자가 출력되는 것을 확인할 수 있다.
*/