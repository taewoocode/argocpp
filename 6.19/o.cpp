#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(v[j] < v[j + 1]){
                swap(v[j], v[j + 1]);
            }
        }
    }

    return 0;
}