#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,pair<int,int>> mp = {

        {"black", {0, 1}}, {"brown", {1, 10}}, {"red", {2, 100}},
        {"orange", {3, 1000}}, {"yellow", {4, 10000}}, {"green", {5, 100000}},
        {"blue", {6, 1000000}}, {"violet", {7, 10000000}},
        {"grey", {8, 100000000}}, {"white", {9, 1000000000}}


    };

    //string a,b,c;
    //cin >> a >> b >> c;
    string s1,s2,s3;
    s1 = to_string(mp[0].first);
    cout << s1 << ' ';
    //s2 = to_string(mp[b].first);
    s3 = s1 + s2;

    return 0;
}