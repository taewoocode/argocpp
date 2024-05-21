#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(int i = 0; i <= v.size(); i++){
        for(int j = i + 1; j <= v.size(); j++){
            if(v[i] < v[j]){
                int temp = v[i];
                v[i] = v[j]; //j를 i에 저장 
                v[j] = temp;
            }
        }
    }
    for(auto i : v) {
        cout << i << " ";
    }
    return 0;
}

