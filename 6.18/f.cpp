#include<bits/stdc++.h>
using namespace std;
//대회를 고려한 알고리즘에서는 정렬을 구현할 필요가 거의 없다.
vector<int > v {4,3,1,5,6,5,2,3,4,6,3};
int main(){
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    cout << '\n';
    sort(v.begin(), v.end());
    for(int it : v){
        cout << it;
    }
    cout << '\n';

    return 0;
}

