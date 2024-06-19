#include <bits/stdc++.h>
using namespace std;

int n;  // 전역 변수로 배열의 크기
vector<int> v;  // 전역 변수로 배열

int x;  // 전역 변수로 찾고자 하는 값

bool found = false;  // 전역 변수로 찾았는지 여부

int main() {
    cin >> x;  // 찾고자 하는 값 x 입력
    cin >> n;  // 배열의 크기 n 입력
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];  // 배열 값 입력
    }

    sort(v.begin(), v.end());  // 정렬

    int a = 0, b = n - 1;

    while (a <= b) {
        int k = (a + b) / 2;
        if (v[k] == x) {
            found = true;
            break;
        } else if (v[k] < x) {
            a = k + 1;
        } else {
            b = k - 1;
        }
    }

    if (found) {
        cout << "found it" << '\n';
    } else {
        cout << "not found" << '\n';


    return 0;
}
