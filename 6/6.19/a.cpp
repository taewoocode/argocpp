#include<bits/stdc++.h>
using namespace std;
int best = 0;
int n;
int arr[];
int main(){
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j];
            best = max(best, sum);
        }
    }
    
    return 0;
}