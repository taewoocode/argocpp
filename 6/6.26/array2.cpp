#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout << arr[2][3] << '\n'; //12
    arr[2][3] = 15;
    cout << arr[2][3] << '\n';
    return 0;
}