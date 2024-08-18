#include <bits/stdc++.h>
using namespace std;
const int MAX = 500000;  
unordered_map<int, int> cardMap;  
int n, m, num,q;  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        cardMap[num]++;  
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> q;
        cout << cardMap[q] << ' ';  // 카드의 개수 출력
    }
    cout << '\n';
    
    return 0;
}
