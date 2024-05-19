#include <bits/stdc++.h>
using namespace std;

struct Dictionary
{
    // 해당 키를 갖는 항목이 있는지 여부를 반환
    bool has(const string &key);
    // 해당 키와 값을 갖는 항목을 추가
    void insert(const string &key, const string &value);

    string get(const string &key);
    void erase(const string &key);
};