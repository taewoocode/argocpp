#include <bits/stdc++.h>
using namespace std;

void ToCelsius(double *F){

    *F = (*F - 32)/1.8;

}

double ToCelsius2(double F){
    return(F-32)/1.8;

}

int main(){

    double temperature = 42; //화시 42도
    ToCelsius(&temperature); // 주소가 아닌 값이 넘어가기 때문에 32가 넘어간다. pass by value -> main 함수에 영향을 주지 않는다.
    printf("%lf", temperature); // ToCelsius랑 main함수에서의 매개변수가 주소가 다르다.
    return 0;
}