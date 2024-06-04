#include <bits/stdc++.h>
using namespace std;
pair<int,int> pi;
tuple<int,int,int> tl;
int a,b,c;

int solution(){
    int a = 1;
    auto b = 1;
    cout << b << '\n';
    return 0;
}

int solution2(){
    vector<int> v {1,2,3};
    cout << (int)v.size() - 10 << '\n';
    return 0;
}

int main(){
    pi = {1,2};
    a = pi.first;
    b = pi.second;
    cout << a << " : " << b << '\n'; // 1 : 2
    tl = make_tuple(1,2,3);
    a = get<0>(tl);
    b = get<1>(tl);
    c = get<2>(tl);
    cout << a << " : " << b << " : " << c << '\n'; // 1 : 2 : 3 
    return 0;
}

