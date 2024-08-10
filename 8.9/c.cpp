#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    //앞에 있는 문자들 삭제
    v.insert(v.begin(),0);
    v.erase(v.begin());
    for(auto i : v){
        cout << i << ' ';
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> numbers{1,2,3,4,5};
    int targets[] = {3,7};

    for(int target : targets){
        auto it = numbers.find(target);

        if(it != numbers.end()){
            cout << "원소" << target << "을 찾았습니다." << '\n';
        } else {
            cout << "원소" << target << "를 찾지 못했습니다." << '\n';
        }
    }
    return 0;
}