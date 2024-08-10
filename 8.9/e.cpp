#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s {1,3,5,2,9};

    s.insert(8);
    for(auto it : s){
        cout << it << ' ';
    }
    return 0;
}