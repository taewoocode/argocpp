#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,43,2,1,3,2,3,1};
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << ' ';

    }
    cout << '\n';
   
    auto a = lower_bound(v.begin(), v.end(), 3);
    auto b = upper_bound(v.begin(), v.end(), 6);
    cout << *a << " " << *b << '\n';
    return 0;
}