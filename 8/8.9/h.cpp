#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,3,2,5};

    auto it = count(v.begin(), v.end(), 5);
    cout << it << '\n';

    return 0;
}