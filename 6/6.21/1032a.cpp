#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    string copy = v[0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < copy.size(); j++){
            if(copy[j] != v[i][j]){
                copy[j] = '?';
            }
        }
    }
    cout << copy << '\n';

    return 0;
}

