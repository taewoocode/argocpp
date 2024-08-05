#include <bits/stdc++.h>
using namespace std;

int t; // 테스트 케이스 수
int n; // 전화번호 갯수

bool no_prefix(vector<string>& p) {
    // 전화번호 리스트를 사전 순으로 정렬
    sort(p.begin(), p.end());

    // 인접한 전화번호들끼리 접두어 관계가 있는지 확인
    for (int i = 0; i < p.size() - 1; i++) {
        if (p[i + 1].find(p[i]) == 0) {
            return false; // 접두어 관계가 있음
        }
    }
    return true; // 접두어 관계가 없음
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector<string> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        if (no_prefix(p)) {
            cout << "YES" << endl; // 접두어가 겹치지 않음
        } else {
            cout << "NO" << endl; // 접두어가 겹침
        }
    }

    return 0;
}

