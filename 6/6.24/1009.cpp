#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        // 계산 시작
        int temp = a % 10;  // a의 일의 자리 수 //a가 70이라면 0을 반환한다. 0은 70의 일의자리이다.
        if (temp == 0) {
            temp = 10;  // 일의 자리가 0이면 10으로 처리
        }
        
        // b번째 자리까지 반복해서 일의 자리 수 갱신
        for (int i = 1; i < b; ++i) {
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
