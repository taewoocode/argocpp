#include<bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimiter){
    long long pos;
    vector<string> ret;
    string token = "";
    while((pos = input.find(delimiter)) != string::npos){
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0,pos+delimiter.size());
    }
    ret.push_back(input);
    return ret;
}

int main(){
    vector<string> a;
    string d = " ";
    string g = split(a,d);
    for(auto s : g){
        cout << s << ' ';
    }

}