#include<bits/stdc++.h>
using namespace std;
int n, cnt;
const int INF = 1e6; //100000
int main(){
    cin >> n;
    int i = 0;
    while(true){
        string a = to_string(i);
        if(a.find("2400") != string::npos){
            cnt++;
            if(cnt == n){
                cout << a << '\n';
                break;
            }
        }
        i++;
    }
    cin >> n;
    for(int i = 2400; i < INF; i++){
        string a = to_string(i);
        if(a.find("2400") != string::npos){
            cnt++;
            if(cnt == n){
                cout << a << '\n';
                break;
            }
        }
    }
    return 0;
}