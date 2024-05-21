#include <bits/stdc++.h>
using namespace std;
int ret = 1;
void a(){ //return 안함
    ret = 2;
    cout << ret << '\n';
    return;
}

double bbb(){
    return 1.232323;
}

char aaa(){
    char a = 'a';
    return a;
}



int main(){
    double result = bbb();
    cout << result << '\n'; //반환값이 있는 경우 반환 변수 선언 후 저장 

    char good = aaa();
    cout << good << '\n';
    
    return 0;
}