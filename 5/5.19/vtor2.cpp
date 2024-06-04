#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    for(int i = 1; i <= 5; i++){
        v.push_back(i);
        v.push_back(i); //1 1 2 2 3 3 4 4 5 5
                        //1 2 3 4 5 //index 4번째 까지는 중복되지 않은 배열을 반환한다.
    }
    for(int i : v) cout << i << " ";
    cout << '\n';
    //중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
    auto it = unique(v.begin(), v.end());
    cout << it - v.begin() << '\n';
    for(int i : v) cout << i << " ";
    return 0;
}