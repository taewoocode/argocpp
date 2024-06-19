#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
int main(){
    cin >> n;
    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    for(auto it : v){
        cout << it;
    }
    
    return 0;
}

/*
버블정럴을 구현하되 swap함수를 사용하지 않고 구현하시오.
*/