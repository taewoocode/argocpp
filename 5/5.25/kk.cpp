#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,2,3,1,3,5,6,7};
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(auto i : v){
        cout << i << " ";
    }
    return 0;
}