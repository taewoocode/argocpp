#include <iostream>
using namespace std;

// 전역 변수 선언
int t, a, b, temp;

int main() {
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b;

        // 계산 시작
        temp = a % 10;  // a의 일의 자리 수
        if (temp == 0) {
            temp = 10;  // 일의 자리가 0이면 10으로 처리
        }

        // b번째 자리까지 반복해서 일의 자리 수 갱신
        for (int j = 1; j < b; ++j) {
            temp = (temp * a) % 10;  // 일의 자리 수 계산
            if (temp == 0) {
                temp = 10;  // 일의 자리가 0이면 10으로 처리
            }
        }

        // 결과 출력
        cout << temp << '\n';
    }

    return 0;
}
