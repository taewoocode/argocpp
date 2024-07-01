#include<bits/stdc++.h>
using namespace std;
bool found = false;
int n, x;
int a, b;
vector<int> v;

int main(){
    cin >> x; //찾아야 하는 수
    cin >> n; //입력
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end()); //오름차순 정렬 sort
    int a = 0, b = n - 1;
    while(a <= b){
        int k = (a + b) / 2;
        if(v[k] == x){
            found = true;
            break;
        } else if(v[k] < x ){
            a = k + 1;
        } else {
            b = k - 1;
        }
    }
    if(found){
        cout << "found it" << '\n';
    } else {
        cout << "not found" << '\n';
    }

    return 0;
}