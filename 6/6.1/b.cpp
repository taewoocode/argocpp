#include <iostream>
using namespace std;

int main() {
    char input[21]; // 최대 길이 20 + 널 문자
    cout << "문자열을 입력하세요: ";
    cin >> input;

    // 배열을 직접 탐색하여 소문자만 출력
    for (int i = 0; i < 20 && input[i] != '\0'; ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            cout << input[i];
        }
    }
    cout << endl;

    return 0;
}
