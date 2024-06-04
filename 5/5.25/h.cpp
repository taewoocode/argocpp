#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimeter){
    vector<string> ret; //결과값을 리턴할 ret 배열
    long long pos = 0;
    string token = ""; //token을 ret에다가 담아야함
    while((pos = input.find(delimeter)) != string :: npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length()); //앞에서부터 지움
    }
    ret.push_back(token);
    return ret; 
}

int main(){
    string s = "abcdabc", d = "d";
    vector<string> a = split(s,d);
    for(auto b : a){
        cout << b << '\n';
    }
}