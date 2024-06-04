#include <bits/stdc++.h>
using namespace std;
int main(string str1, string str2){
    int answer = 0;
    if(str1.find(str2) != string::npos){
        return 1;
    } else {
        return 2;
    }
    return answer; 
}