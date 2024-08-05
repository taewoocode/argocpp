#include<bits/stdc++.h>
using namespace std;
int H, M, A;
int main(){
    cin >> H >> M >> A;
    
    H += A / 60;
    M += A % 60;
    if(M >= 60){
        H += 1;
        M -= 60;
    }
    if(H >= 24){
        H -= 24;
    }
    cout << H << " " << M << '\n';

    return 0;
}

//시간은 몫, 분은 모듈러 연산을 통해 나머지를 통해서 반환