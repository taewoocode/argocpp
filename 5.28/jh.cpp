#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int main(){
    for(int i = 10; i >= 1; i--){
        v.push_back({i, 10 - i});
    }
    //처음에 10과 0이 저장되지만 sort함수로 오름차순 정렬됨
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i.first << " : " << i.second << '\n';
    }
    return 0;
}