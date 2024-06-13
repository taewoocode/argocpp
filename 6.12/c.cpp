#include <bits/stdc++.h>
using namespace std;
int n,cnt;
const int INF = 1e6; //10만 정도의 수
int main(){
    cin >> n;
    for(int i = 2400; i < INF; i++){
        string a = to_string(i);  //int -> string
        if(a.find("2400") != string::npos){//string npos를 반환하지 않는다면은 문자열 a에 2400이 존재한다.
            cnt++;
            if(cnt == n){
                cout << a << '\n';
                break;
            }
        } 
    }
    return 0;
}