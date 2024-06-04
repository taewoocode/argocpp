#include <bits/stdc++.h>
using namespace std;
vector<int> v {1,7,6,5,4,2,7,3};
int main(){
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << ' ';
    }



    return 0;
}