#include<bits/stdc++.h>
using namespace std;
int n = 5;
int arr[] = {1,2,3,4,5};
int best = 0, sum = 0;
int main(){
    for(int k = 0; k < n; k++){
        sum = max(arr[k], sum + arr[k]);
        best = max(best, sum);
    }
    cout << best << '\n';
    return 0;
}

