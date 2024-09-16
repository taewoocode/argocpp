#include<bits/stdc++.h>
using namespace std;
int main(){
    //아래의 코드는 벡터
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    for(auto i : v){
        cout << i << ' ';
    }
    return 0;
}