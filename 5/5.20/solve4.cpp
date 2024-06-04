#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(int i = 0; i <= v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] < v[j]){
                int temp = v[i]; //temp에 i를 저장
                v[i] = v[j]; //i에 j를 저장
                v[j] = temp; //j에 i를 저장
            }
        }
    }
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}


풀이 1,2 모두 tmp 벡터에 array의 i~j번째까지 자른 값을 담아줍니다.

풀이 2의 경우 벡터의 복사 생성자를 이용하여 슬라이싱

sort 함수로 정렬합니다.

tmp 벡터의 k번째 수를 answer 벡터에 담아줍니다.

#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(vector<int> v:commands){
        vector<int> tmp;
        for(int j=v[0]-1; j<v[1]; j++){
            tmp.push_back(array[j]);
        }
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[v[2]-1]);
    }
    return answer;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;  // 결과 값을 저장할 벡터를 초기화합니다.

    for (vector<int> v : commands) {  // 각 명령어 집합에 대해 반복합니다.
        vector<int> tmp;  // 부분 배열을 저장할 임시 벡터를 초기화합니다.

        // 부분 배열을 추출합니다. v[0]에서 v[1]까지, 인덱스는 0부터 시작하므로 v[0]-1 부터 v[1]-1 까지
        for (int j = v[0] - 1; j < v[1]; j++) {
            tmp.push_back(array[j]);  // 부분 배열의 요소를 임시 벡터에 추가합니다.
        }

        // 버블 정렬을 사용하여 임시 벡터를 정렬합니다.
        int n = tmp.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (tmp[j] > tmp[j + 1]) {
                    int temp = tmp[j];
                    tmp[j] = tmp[j + 1];
                    tmp[j + 1] = temp;
                }
            }
        }

        // 정렬된 임시 벡터에서 v[2]번째 요소를 결과 벡터에 추가합니다.
        // 인덱스는 0부터 시작하므로 v[2]-1을 사용합니다.
        answer.push_back(tmp[v[2] - 1]);
    }

    return answer;  // 최종 결과 벡터를 반환합니다.
}
