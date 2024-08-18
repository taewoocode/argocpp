#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5,6};
    cout << binary_search(v.begin(), v.end(), 3); //1
    cout << '\n';
    cout << binary_search(v.begin(), v.end(), 10); //0
    return 0;
}