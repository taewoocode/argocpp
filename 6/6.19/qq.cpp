#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    while(b != 0){
        int temp = b; //18
        b = a % b;  //48 18 12를 b에 저장
        a = temp; //18를 a에 저장
    }
    cout << a << '\n';
    return 0;
}


//유클리드 호제법을 구현하시오 그냥 유클리드 호제법은 최대공약수 구하는 것임
//48과 18의 최대공약수를 구하시오 6
