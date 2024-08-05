#include <bits/stdc++.h>
using namespace std;

int n, m, mx; // 지도 크기 n, m과 최대 거리 mx
int visited[54][54]; // 방문 여부와 거리를 저장하는 배열
const int dy[] = {-1, 0, 1, 0}; // 상하좌우 이동을 위한 y좌표 변화량
const int dx[] = {0, 1, 0, -1}; // 상하좌우 이동을 위한 x좌표 변화량
char a[54][54]; // 지도를 저장하는 배열

// BFS를 통해 최단 거리를 찾는 함수
void bfs(int y, int x) {
    memset(visited, 0, sizeof(visited)); // visited 배열 초기화
    visited[y][x] = 1; // 시작 좌표 방문 처리
    queue<pair<int, int>> q; // BFS를 위한 큐
    q.push({y, x}); // 시작 좌표를 큐에 추가
    int max_dist = 0; // 각 BFS마다 최대 거리를 저장할 변수
    
    // 큐가 비어있지 않은 동안 BFS 수행
    while (!q.empty()) {
        tie(y, x) = q.front(); // 큐의 앞부분 요소를 y, x에 할당
        q.pop(); // 큐의 앞부분 요소 제거
        for (int i = 0; i < 4; i++) { // 상하좌우 네 방향으로 탐색
            int ny = y + dy[i]; // 새로운 y좌표
            int nx = x + dx[i]; // 새로운 x좌표
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) { // 경계를 벗어나면 무시
                continue;
            }
            if (visited[ny][nx]) { // 이미 방문한 곳이면 무시
                continue;
            }
            if (a[ny][nx] == 'W') { // 물인 경우 무시
                continue;
            }
            visited[ny][nx] = visited[y][x] + 1; // 새로운 위치에 거리 기록
            q.push({ny, nx}); // 새로운 위치를 큐에 추가
            max_dist = max(max_dist, visited[ny][nx]); // 최대 거리 갱신
        }
    }
    mx = max(mx, max_dist - 1); // 전체 최대 거리 갱신 (1을 빼서 실제 거리를 맞춤)
}

int main() {
    cin >> n >> m; // 지도 크기 입력
    for (int i = 0; i < n; i++) { // 지도 데이터 입력
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) { // 모든 좌표를 확인
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'L') { // 육지인 경우 BFS 시작
                bfs(i, j);
            }
        }
    }
    cout << mx << '\n'; // 최종 최대 거리 출력
    return 0;
}
