#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;   
    map<string, int> m1; 
    for (int i = 0; i < name.size(); i++) {
        m1[name[i]] = yearning[i];
    }
    for (int i = 0; i < photo.size(); i++) {
        int cnt = 0;  
        for (int j = 0; j < photo[i].size(); j++) {
            cnt += m1[photo[i][j]];
        }
        answer.push_back(cnt);
    }
    return answer;  
}

int main() {
    vector<string> names = {"Alice", "Bob", "Charlie"};
    vector<int> yearnings = {10, 20, 30};
    vector<vector<string>> photos = {{"Alice", "Bob"}, {"Charlie"}, {"Alice", "Charlie"}};
    vector<int> results = solution(names, yearnings, photos);
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}