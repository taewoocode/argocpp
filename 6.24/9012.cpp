#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        stack<char> st;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            } else {
                if(st.top() == '(' && s[i] == ')'){
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }
        if(st.empty()){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}