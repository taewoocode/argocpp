#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];  
    }
    cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end()) << endl;

    return 0;
}
