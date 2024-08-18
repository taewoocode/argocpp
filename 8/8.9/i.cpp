#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,3,3,4,4,4,5,5,5,6,6,6,};
    auto newEnd = unique(v.begin(), v.end());
    //모든 요소 순회
    for(auto it : v){
        cout << it << ' ';
    }
    cout << '\n';
    //중복되지 않는 요소들만 순회
    for(auto it = v.begin(); it != newEnd; it++){
        cout << *it << ' '; 
    }
    cout << '\n';
    cout << v.size() << '\n';

    return 0;
}