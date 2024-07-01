#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n; // 배열 크기 입력
    vector<int> v(n);

    // 배열 요소 입력
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    // 찾고자 하는 값 입력
    cin >> x;

    // 이진 탐색을 위한 초기화
    int a = 0, b = n - 1;
    bool found = false;

    // 이진 탐색
    while(a <= b) {
        int k = (a + b) / 2;
        if(v[k] == x) {
            found = true;
            break;
        }
        if(v[k] < x) {
            a = k + 1;
        } else {
            b = k - 1;
        }
    }

    // 결과 출력
    if(found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
