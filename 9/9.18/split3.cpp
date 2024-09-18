#include<bits/stdc++.h>
using namespace std;
vector<string> split(const string& input, string delimiter){
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while(end != string::npos){ //더이상 구분자가 없을 때 까지 탐색한다.
        result.push_back(input.substr(start,end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}