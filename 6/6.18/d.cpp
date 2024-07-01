#include<bits/stdc++.h>
using namespace std;
int n;
int arr[];
int main(){
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return 0;
}