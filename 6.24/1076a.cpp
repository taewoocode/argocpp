#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, pair<int,int>> d1 = {
        {"black", {0, 1}}, {"brown", {1, 10}}, {"red", {2, 100}},
        {"orange", {3, 1000}}, {"yellow", {4, 10000}}, {"green", {5, 100000}},
        {"blue", {6, 1000000}}, {"violet", {7, 10000000}},
        {"grey", {8, 100000000}}, {"white", {9, 1000000000}}
    };

    string a, b, c;
    cin >> a >> b >> c; // 숫자 텍스트

    string s1, s2, ss;
    s1 = to_string(d1[a].first);
    s2 = to_string(d1[b].first);
    ss = s1 + s2;

    unsigned long long number = stoi(ss); // 저항값
    cout << number * d1[c].second;

    return 0;
}
