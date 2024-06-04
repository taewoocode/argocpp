#include <bits/stdc++.h> // 표준 라이브러리의 모든 헤더를 포함합니다.
using namespace std;

vector<pair<int,int>> v; // pair<int, int> 타입의 벡터를 선언합니다.

// 두 쌍(pair)을 비교하는 함수입니다.
// 첫 번째 요소(first)가 큰 순서대로 정렬합니다.
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first > b.first;
}

int main(){
    // 10부터 1까지 감소하면서 v 벡터에 {i, 10-i} 쌍을 추가합니다.
    for(int i = 10; i >= 1; i--){
        v.push_back({i, 10-i});
    }
    
    // 벡터 v를 정렬합니다.
    // 기본적으로 pair의 첫 번째 요소를 기준으로 오름차순 정렬합니다.
    sort(v.begin(), v.end());
    
    // 정렬된 벡터 v의 요소들을 출력합니다.
    for(auto i : v){
        cout << i.first << " : " << i.second << '\n';
    }
    
    return 0; // 프로그램 종료
}
