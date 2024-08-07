#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // 테스트 케이스 수
    cin >> t;

    while (t--) {
        int n; // 전화번호 갯수
        cin >> n;

        vector<string> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        // 전화번호 리스트를 사전 순으로 정렬
        sort(p.begin(), p.end());

        // 인접한 전화번호들끼리 접두어 관계가 있는지 확인
        bool hasPrefix = false;
        for (int i = 0; i < n - 1; i++) {
            if (p[i + 1].find(p[i]) == 0) {
                hasPrefix = true;
                break;
            }
        }

        if (hasPrefix) {
            cout << "NO" << endl; // 접두어가 겹침
        } else {
            cout << "YES" << endl; // 접두어가 겹치지 않음
        }
    }

    return 0;
}
