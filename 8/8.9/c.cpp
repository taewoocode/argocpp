#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    //앞에 있는 문자들 삭제
    v.insert(v.begin(),0);
    v.erase(v.begin());
    for(auto i : v){
        cout << i << ' ';
    }
    return 0;
}
