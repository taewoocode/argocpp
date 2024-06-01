#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int> array){
    vector<int> v;
    auto t = max_element(array.begin(), array.end());
    v.push_back(*t);
    v.push_back(distance(array.begin(), t));
    return v;
}


int main(){
    vector<int> v {1,2,3,4,5};
    vector<int> result = solution(v);
    for(auto i : result){
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}



