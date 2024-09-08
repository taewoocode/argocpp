#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int ret = 0;
    for(int i = 0; i <= n; i++){
        ret += i;
    }
    return ret;
}

int recursiveSum(int n){
    if(n == 1) return 1;
    return n + recursiveSum(n - 1);
}

for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        for(int k = j + 1; k < n; k++){
            for(int l = k + 1; l < n; l++){
                // 재귀로 반복문을 간단화 시킬 수 있음
            }
        }
    }
}
