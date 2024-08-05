#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    auto it1 = max_element(v.begin(), v.end());
    auto it2 = min_element(v.begin(), v.end());
    cout << *it1 << '\n';
    cout << *it2 << '\n';
    return 0;
}