#include<bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter){
    long long pos = 0;
    vector<string> ret;
    string token = "";
    while((pos = input.find(delimiter)) != string :: npos){
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.size());
    }
    ret.push_back(input);
    return ret;
}

vector<string> split(string input, string delimiter){
    long long pos = 0;
    vector<string> ret;
    string token = "";
    while((pos = input.find(delimiter)) != string::npos){
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0,pos + delimiter.size());
    }
    ret.push_back(input);
    return ret;
}

vector<string> split(string input, string delimiter){
    long long pos = 0;
    string token = "";
    vector<string> ret;
    while((pos = input.find(delimiter)) != string :: npos){
        token = input.substr(0,pos);
        ret.push_back(token);
    }
}

int main(){
string s = "안녕하세요!", d = " "; 
vector<string> a = split(s, d);
for(string b : a){
cout << b << "\n";
    }
}