#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "hello world";
    reverse(s.begin(), s.end());
    cout << s << '\n';
    reverse(s.begin(), s.end());
    cout << s << '\n';
    reverse(s.begin() + 3, s.end());
    cout << s << '\n';
    //hello world -> heldlrow ol
    
    return 0;
}