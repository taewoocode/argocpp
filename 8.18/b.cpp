#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,6};
    //반시계 방향
    rotate(v.begin(), v.begin() + 1, v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
    rotate(v.rbegin(), v.rbegin() + 1, v.rend());
    for(auto it : v){
        cout << it << ' ';
    }

    return 0;
}