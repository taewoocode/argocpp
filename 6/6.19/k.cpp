#include<bits/stdc++.h>
using namespace std;
int main(){
    int s = 18;
    int idx = 2;
    s ^= 1 << idx; 
    cout << s; //22
    return 0;
}