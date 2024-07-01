#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "첫 번째 수를 입력하세요: ";
    cin >> a;
    cout << "두 번째 수를 입력하세요: ";
    cin >> b;

    while (b != 0) { //b가 0이 아닐 때 까지 계속 반복됨
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "최대공약수: " << a << endl; //최대공약수 return함 

    return 0;
}
//48과 18이라면 ?
/*
a = 48 이고 b가 18
18을 temp에다가 저장
48과 18을 나눈 나머지를 b에 저장 12가 저장됨.
18을 a에다가 저장

a = 18 b = 12
b에는 다시 6이 저장이되고
a에는 12가 저장됨


*/