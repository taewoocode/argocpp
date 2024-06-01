#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array1, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0; i < commands.size(); i++){
        vector<int> temp;
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++){ // 인덱스를 잘못 조정하고 있었습니다. -1 제거
            temp.push_back(array1[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp.at(commands[i][2] - 1));
    }
    return answer;
}

int main() {
    // 배열과 명령을 초기화합니다.
    vector<int> array1 = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};

    // solution 함수 호출
    vector<int> result = solution(array1, commands);

    // 결과 출력
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
