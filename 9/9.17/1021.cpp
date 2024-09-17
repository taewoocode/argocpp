#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    deque<int> dq;
    vector<int> v(m); // 뽑아내려는 원소의 위치 저장

    // 1부터 n까지 자료를 큐에 넣음
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    // 뽑아내려는 원소 입력
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    int total = 0;
    for (int i = 0; i < m; i++) {
        int temp = v[i];
        int index = 0;
        
        // 현재 큐에서 temp의 위치 찾기
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == temp) {
                index = j;
                break;
            }
        }

        // 왼쪽 이동과 오른쪽 이동 중 더 적은 연산 선택
        if (index < dq.size() - index) {
            total += index;
            for (int j = 0; j < index; j++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            total += dq.size() - index;
            for (int j = 0; j < dq.size() - index; j++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        // 첫 번째 원소를 뽑아냄
        dq.pop_front();
    }

    cout << total << '\n';

    return 0;
}
/*
 ==============================================
*/
#include <bits/stdc++.h>
using namespace std;

// 전역 변수 선언
int n, m;
deque<int> dq;
vector<int> v;
int total = 0; // 전역 변수로 total 선언
int index = 0; // 전역 변수로 index 선언

void process() {
    cin >> n >> m;
    
    // 1부터 n까지 자료를 큐에 넣음
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    // 뽑아내려는 원소 입력
    v.resize(m); // v의 크기를 m으로 조정
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++) {
        int temp = v[i];
        index = 0; // 전역 변수 초기화
        
        // 현재 큐에서 temp의 위치 찾기
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == temp) {
                index = j;
                break;
            }
        }

        // 왼쪽 이동과 오른쪽 이동 중 더 적은 연산 선택
        if (index < dq.size() - index) {
            total += index;
            for (int j = 0; j < index; j++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            total += dq.size() - index;
            for (int j = 0; j < dq.size() - index; j++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

        // 첫 번째 원소를 뽑아냄
        dq.pop_front();
    }

    cout << total << '\n';
}

int main() {
    process();
    return 0;
}
