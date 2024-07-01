#include<bits/stdc++.h>
using namespace std;
int n, to, from;
int ret = 1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        cin >> from >> to;
        v.push_back({to,from});
    }
    //정렬
    sort(v.begin(), v.end());
    from = v[0].second;
    to = v[0].first;
    for(int i = 1; i < n; i++){
        //from이 to보다 크면?
        if(v[i].second < to){
            continue;
        } 
        from = v[i].second;
        to = v[i].first;
        ret++;
    }
    cout << ret << '\n';
    return 0;
}