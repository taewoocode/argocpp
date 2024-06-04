#include <bits/stdc++.h>
using namespace std;
vector<int> v {5,4,1,26,7,2,4,6,8};
int main(){
    sort(v.rbegin(), v.rend()); //reverse
    for(auto i : v ){
        cout << i << " ";
    }

    return 0;
}