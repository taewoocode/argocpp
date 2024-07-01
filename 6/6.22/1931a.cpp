#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, from, to;
    int ret = 0;
    cin >> n;
    
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++) {
        cin >> from >> to;
        v.push_back({to, from}); // 종료 시간을 first, 시작 시간을 second로 저장
    }
    
    // 종료 시간을 기준으로 정렬
    sort(v.begin(), v.end());
    
    int last_end_time = 0;
    for(int i = 0; i < n; i++) {
        // 현재 회의의 시작 시간이 마지막 회의의 종료 시간보다 크거나 같으면
        if(v[i].second >= last_end_time) {
            last_end_time = v[i].first;
            ret++;
        }
    }
    
    cout << ret << '\n';
    return 0;
}
