#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,6};

    auto maxIt = max_element(v.begin(), v.end());
    auto minIt = min_element(v.begin(), v.end());
    cout << *maxIt << '\n';
    cout << *minIt << '\n';
    return 0;
}