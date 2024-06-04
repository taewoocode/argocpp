#include <bits/stdc++.h>
using namespace std;
string s;
int main(){

    getline(cin , s); //문자열 입력을 받는다. -> getline은 띄어쓰기 까지 입력을 받는다.
    for(int i = 0; i < s.size(); i++){
        //대문자인 경우
        if(s[i] >= 65 && s[i] < 97){ //a=97이라 소문자임
            if(s[i] + 13 > 90){
                s[i] = s[i] + 13 - 26;
            } else{
                s[i] = s[i] + 13;
            }
        //소문자인 경우
        } else if(s[i] >= 97 && s[i] <= 122){
            if(s[i] + 13 > 122){
                s[i] + 13 - 26;
            } else{
                s[i] = s[i] + 13;
            }
        }
    }
    return 0;
}
