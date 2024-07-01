#include <bits/stdc++.h>
using namespace std;
vector<int> v{1,2,3,4,5};
int main(){
    find(v.begin(), v.end(), v.end());
    for(int a : v){
        cout << a << '\n';
    }
    
}
