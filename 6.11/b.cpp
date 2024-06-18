#include <bits/stdc++.h>
using namespace std;

int main() {
    int Max = -1, x = 0, y = 0;
    int num;

    // 9x9 격자를 순회
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> num; // 격자의 숫자를 입력받음
            if (Max < num) { // Max보다 큰 숫자를 찾았을 때
                Max = num; // Max를 해당 숫자로 갱신
                x = i + 1; // x에 행 인덱스를 저장 (1부터 시작하는 값으로 변환)
                y = j + 1; // y에 열 인덱스를 저장 (1부터 시작하는 값으로 변환)
            }       
        }
    }

    // 결과 출력
    cout << Max << '\n' << x << " " << y;
    return 0;
}
