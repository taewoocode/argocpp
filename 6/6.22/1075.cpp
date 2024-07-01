#include <bits/stdc++.h>
using namespace std;

int n, f;

int main() {
    cin >> n >> f;

    // n을 가장 가까운 작은 100의 배수로 만듦
    n = n - n % 100;

    // 0부터 99까지 f의 배수를 찾음
    for (int i = 0; i < 100; i++) {
        if ((n + i) % f == 0) {
            if (i < 10) {
                cout << "0";
            }
            cout << i << endl;
            break;
        }
    }

    return 0;
}
