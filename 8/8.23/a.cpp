#include<bits/stdc++.h>
using namespace std;
int idx;

bool comp(string a, string b){
    if(a[idx] == b[idx]){
        return a < b;
    } else {
        return a[idx] < b[idx];
    }
}




vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    idx = n;
    sort(strings.begin(), strings.end(), comp);
    
    return strings;
}