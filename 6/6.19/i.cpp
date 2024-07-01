#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int n, x;
int a, b;
bool found = false;
int main(){
    cin >> x;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int a = 0, b = n - 1;
    while(a <= b){
        int k = (a + b) / 2;
        if(v[k] == x){
            found = true;
            break;
        }
        if(v[k] < x){
            a = k + 1;
        } else {
            b = k - 1;
        }
        
    }
    if(found){
        cout << "found it" << '\n';
    } else {
        cout << "nod found" << '\n';
    }

    return 0;
}