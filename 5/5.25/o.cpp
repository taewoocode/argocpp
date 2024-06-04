#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, int> pi;
    tuple<int, int, int> tl;
    int a,b,c;
    pi = {1,2};
    tl = {1,2,3};
    tie(a,b) = pi; // pi에 있는 값을 tie(a,b)로 끄집어낸다.
    cout << a << " : " << b << '\n';
    tie(a,b,c) = tl; //tl에 있는 값을 tie(a,b,c)로 끄집어낸다.
    cout << a << " : " << b << " : " << c << '\n';

    return 0;
}