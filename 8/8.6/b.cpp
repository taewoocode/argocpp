#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i <= t.size() - p.size(); i++){
        ll a = stoll(t.substr(i,p.size()));
        ll b = stoll(p);
        if(a <= b){
            answer++;
        }
        
    }
    return answer;
}