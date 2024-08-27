#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {20,2,3,4,5};
    auto it = find(v.begin(), v.end(), 3);
    cout << *it << '\n'; //3
    cout << *v.begin() << ' '; //20
    cout << '\n';
    cout << *v.end() << ' '; //0
    return 0;
}