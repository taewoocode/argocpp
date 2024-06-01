#include<bits/stdc++.h>
using namespace std;
int t, n;
string a,b;
map<string,int> _map;
typedef long long ll;
int main(){
    cin >> t; //testcase
    while(t--){ // testcase --
        // map<string,int> _map; //string -> key, int -> value
        cin >> n; // cin -> n
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            _map[b]++;

        }
        ll ret = 1;
        for(auto c : _map){
            ret *= (ll(c.second + 1));
        }
        ret--;
        cout << ret << '\n';
    }
    return 0;
}