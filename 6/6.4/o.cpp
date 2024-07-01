#include<bits/stdc++.h>
using namespace std;
#include <algorithm>
int main(){
    vector<int> v {1,2,3,4,5,6,7,8,9,10};
    int value1 = 5;
    int value2 = 20;

    bool found1 = binary_search(v.begin(), v.end(), value1);
    bool found2 = binary_search(v.begin(), v.end(), value2);

    cout << "값 " << value1 << "를 찾는 중: " << (found1 ? "찾음" : "찾지 못함") << '\n';
    cout << "값 " << value2 << "를 찾는 중: " << (found2 ? "찾음" : "찾지 못함") << '\n';

    return 0;


}
