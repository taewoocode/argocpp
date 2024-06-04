#include<bits/stdc++.h>
using namespace std;
int main(){
    string my_string = "hello";
    for(char c : my_string){ //my_string의 각 문자를 c에 할당하면서 순회
        cout << c << '\n';
    }
    return 0;
}