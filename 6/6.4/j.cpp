#include <bits/stdc++.h>
using namespace std;
list<int> a;
void print(list<int> a){
    for(auto i : a) cout << i << ' ';
    cout << '\n';
}
int main(){
    for(int i = 0; i <= 3; i++){
        a.push_back(i);
        a.push_front(i);
    }
    for(auto i : a){
        cout << i << '\n';
    }
}