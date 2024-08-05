#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5};
    cout << binary_search(v.begin(), v.end(), 3); //1 //찾으면 1을 반환
    cout << binary_search(v.begin(), v.end(), 7); //0 //찾지 못하면 3을 반환
    
    return 0;
}