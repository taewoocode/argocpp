#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    cout << v.back() << '\n'; //5
    v.pop_back();
    cout << *v.begin() << '\n';
    for(int i : v){
        cout << i << " "; //1 2 3 4
    }
    return 0;
}