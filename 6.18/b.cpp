#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;

void generateSubsets(int k) {
    if(k == n + 1) {
        // 부분집합을 처리 (예: 출력)
        for(int i : v) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        // k를 부분집합에 포함시킴
        v.push_back(k);
        generateSubsets(k + 1);
        v.pop_back();
        // k를 부분집합에 포함시키지 않음
        generateSubsets(k + 1);
    }
}

int main(){
    n = 3;
    generateSubsets(1);
    return 0;
}