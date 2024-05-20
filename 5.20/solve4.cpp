#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    for(int i = 0; i <= v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] < v[j]){
                int temp = v[i]; //temp에 i를 저장
                v[i] = v[j]; //i에 j를 저장
                v[j] = temp; //j에 i를 저장
            }
        }
    }
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}