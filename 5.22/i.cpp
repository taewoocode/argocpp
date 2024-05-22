#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int num;
int main(){
    for(int i = 0; i < 10; i++){
        cin >> num;
        v.push_back(num);
    }
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}