#include<bits/stdc++.h>
using namespace std;
const int n = 4;
int main(){
    string a[n] = {"사과", "딸기", "포도", "배"};
    for(int i = 0; i < (1 << n); i++){ //ex) n이 만약 3이라면 2의 3승 즉 8가지가 되고, 위는 4이기 때문에 16이 경우의 수가 된다.
        string ret = "";
        cout << i << " : ";
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                ret += (a[j] + " ");
            }
        }
        cout << ret << '\n';
    }
    return 0;
}