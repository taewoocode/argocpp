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
        for(int j = 0; j < n; j++){
            if(v[j] > v[j + 1])
            int temp = v[j];
            v[j] = v[j + 1];
            v[j + 1] = v[j];
        }
    }
    return 0;
}