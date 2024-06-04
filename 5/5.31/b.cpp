#include<bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1,2,3,4,5};
void print(vector<int> b){
    for(int i : b){
        cout << i << " ";
    }
    cout << '\n';
}

void combi(int start, vector<int> b){
    //기저사례 if가 참이면 b를 출력하고 함수를 종료한다.
    if(b.size() == k){
        print(b);
        return ; 
    }   
    for(int i = start + 1; i < n; i++){
        b.push_back(i); //i를 b에 추가한다.
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main(){
    vector<int> b;
    // combi(-1, b);
    //3개를 뽑을 때는 3중 for문이 필요하다.
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                cout << i << " : " << j << " : " << k << " : " << '\n';
            }
        }
    }
    return 0;
}