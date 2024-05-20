#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 1 || n == 0) return 1; //기저사례: 1이거나 0이면 둘중에 하나라도 맞으면 return
    return n * fact(n - 1);
}
int fact1(int n){
    int ret = 1;
    for(int i = 1; i <= n; i++){
        ret *= i;
    }
}

int f(int n){
    if(n == 100) return 100; //기저사례: 상한선을 정해서 종료시켜 버림
    return f(n+1);
}

int fibo(int n){
    if(n == 0 || n == 1) return 1;
    cout << "fibo: " << n << '\n';
    return fibo(n-1) + fibo(n-2);

}

int n = 5;
int main(){
    cout << fact(n) << " " << fibo(n) << '\n';
    return 0;
}