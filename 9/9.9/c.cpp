#include<bits/stdc++.h>
using namespace std;
map<string, int> mp;
//사전순으로 정렬되기 때문이다.
/**
 * red, black 트리구조이다.
*/
string a[] = {"태우","민주","맹구"};
int main(){
    for(int i = 0; i < 3; i++){
        mp.insert({a[i], i + 1});
        mp[a[i]] = i + 1;
    }
    //map의 모든 요소를 순회하는 방법이다.
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << (*it).first << " : " << (*it).second << '\n';
    }
    mp.clear();
    return 0;
}