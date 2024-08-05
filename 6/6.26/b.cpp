#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> numbers = {1,2,3,4,5};
    int targets[] = {3,7};
    for(int target : targets){
        //set에 있는 원소를 탐색
        auto it = numbers.find(target);
        if(it != numbers.end()){
            cout << "원소" << target << "를 찾았습니다. 값 : " << *it << '\n';
        } else {
            cout << "원소" << target << "를 찾지 못했습니다." << '\n'; 
        }
    }
    return 0;
}