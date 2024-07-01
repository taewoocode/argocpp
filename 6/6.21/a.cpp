// 10010 -> 10011 s |= (1<<idx)
// 1<<0 -> 00001
//or연산자는 00빼고는 다 괜찮다.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s = 18;
    int idx = 0;
    s |= (1 << idx); //0번째 비트를 킨다.
    cout << s << '\n'; //19
    return 0;

}