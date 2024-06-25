#include<bits/stdc++.h>  // 대부분의 표준 라이브러리를 포함하는 헤더
using namespace std;
typedef long long ll;  // 긴 정수형 타입 정의
const int INF = 987654321;  // 매우 큰 값으로, 무한대를 나타냄
int n, mp, mf, ms, mv;  // 입력 받을 변수들: n (식재료 수), mp (필요한 단백질), mf (필요한 지방), ms (필요한 탄수화물), mv (필요한 비타민)
int b, c, d, e, ret = INF, sum;  // 계산에 사용할 변수들: b, c, d, e (현재 조합의 단백질, 지방, 탄수화물, 비타민 합), ret (최소 비용), sum (현재 조합의 비용 합)
struct A{
    int mp, mf, ms, mv, cost;  // 식재료 구조체 정의: mp (단백질), mf (지방), ms (탄수화물), mv (비타민), cost (비용)
} a[16];  // 최대 16개의 식재료를 저장할 배열
map<int, vector<vector<int>>> ret_v;  // 비용을 키로, 해당 비용의 식재료 조합들을 값으로 가지는 맵

int main(){
    ios_base::sync_with_stdio(false);  // C와 C++의 입출력을 동기화 해제
    cin.tie(NULL);  // cin의 묶음을 해제하여 입출력 속도를 높임
    cout.tie(NULL);  // cout의 묶음을 해제하여 입출력 속도를 높임
    cin >> n;  // 식재료 수 입력
    cin >> mp >> mf >> ms >> mv;  // 필요한 영양소들 입력
    for(int i = 0; i < n; i++){
        cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;  // 각 식재료의 영양소와 비용 입력
    }

    // 모든 부분집합을 탐색 (비트마스크 사용)
    for(int i = 1; i < (1 << n); i++){  // 1부터 2^n-1까지 반복
        b = c = d = e = sum = 0;  // 각 조합의 영양소와 비용 초기화
        vector<int> v;  // 현재 조합의 인덱스를 저장할 벡터
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){  // i의 j번째 비트가 켜져 있는 경우
                v.push_back(j + 1);  // 현재 식재료의 인덱스를 벡터에 추가
                b += a[j].mp;  // 단백질 합계에 추가
                c += a[j].mf;  // 지방 합계에 추가
                d += a[j].ms;  // 탄수화물 합계에 추가
                e += a[j].mv;  // 비타민 합계에 추가
                sum += a[j].cost;  // 비용 합계에 추가
            }
        }

        // 필요한 영양소를 모두 만족하는지 확인
        if(b >= mp && c >= mf && d>= ms && e >= mv){
            if(ret >= sum){  // 현재 최소 비용보다 작거나 같은 경우
                ret = sum;  // 최소 비용 갱신
                ret_v[ret].push_back(v);  // 현재 조합을 맵에 저장
            }
        }
    }

    // 결과 출력
    if(ret == INF){  // 조건을 만족하는 조합이 없는 경우
        cout << -1 << '\n';  // -1 출력
    } else {
        sort(ret_v[ret].begin(), ret_v[ret].end());  // 최소 비용의 조합들을 정렬
        cout << ret << '\n';  // 최소 비용 출력
        for(int i : ret_v[ret][0]){  // 첫 번째 조합 출력
            cout << i << ' ';
        }
    }

    return 0;
}
