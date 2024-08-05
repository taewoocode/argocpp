#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a > b; // 앞에숫자가 뒤에숫자보다 클 때가 참이므로 내림차순 정렬을 의미한다.
}


vector<int> solution(vector<int> lst){
    //sort로 반복자 앞, 뒤를 활용하여 배열 범위를 지정해주고 ,compare로 배열의 정렬 기준을 정한다.
    sort(lst.begin(),lst.end(),compare); 
    //중복값 제거
    lst.erase(unique(lst.begin(), lst.end()), lst.end());
    //정렬 순회
    for(auto it : lst){
        cout << it << ' ';
    }
}