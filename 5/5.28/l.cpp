#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a < b;
}

vector<int> v {3,10,4,11};
int main(){
    int result = cmp(4, 8);
    int result2 = cmp(8,4);
    cout << result << '\n'; //1
    cout << result2 << '\n'; //0
    sort(v.begin(), v.end(), cmp);
    for(int i : v){
        cout << i << ' ';
    }
    return 0;
}