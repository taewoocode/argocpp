#include<bits/stdc++.h>
using namespace std;
int main(string myString, string pat){
    int answer = 0;
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    if(myString.find(pat) != string::npos){
        answer = 1;
    } else {
        answer = 0;
    }
    return answer;
}