#include<bits/stdc++.h>
using namespace std;
const int n = 4;
string a[n] = {"사과","딸기","포도","배"};
void go(int num){
    string ret = "";
    for(int i = 0; i < 4; i++){
        if(num & (1 << i)){
            ret += a[i] + " ";
        }
    }
    cout << ret << '\n';
}


int main(){
    for(int i = 0; i < n; i++){
        go(1 | (1 << i));
    }
ㄴ
    return 0;
}