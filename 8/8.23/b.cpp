#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main(){
    mp["Alice"] = 85;
    mp["Bob"] = 92;
    mp["Charlie"] = 78;
    mp["David"] = 90;

    cout << "Alice's score: " << mp["Alice"] << '\n';
    cout << "Bob's score: " << mp["Bob"] << '\n';

    return 0;
}