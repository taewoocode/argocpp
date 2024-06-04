#include <bits/stdc++.h>
using namespace std;
vector<int> v {1,3,1,32,5,3,5,41,6,7};
int main(){
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << " ";
    }
}