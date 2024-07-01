#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 우선순위 큐의 원소 타입을 pair<int, int>로 변경
priority_queue<int, vector<int>, greater<int>> pq; // 오름차순 큐
priority_queue<int, vector<int>, less<int>> pq2;   // 내림차순 큐

int main() {
    for (int i = 5; i >= 1; i--) {
        pq.push(i);
        pq2.push(i);
    }
    
    while (!pq.empty() && !pq2.empty()) {
        cout << pq.top() << " : " << pq2.top() << '\n';
        pq.pop();
        pq2.pop();
    }
    
    return 0;
}
