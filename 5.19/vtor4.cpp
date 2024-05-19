#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

//함수는 main함수보다 앞에 있어야 한다 그 이유는 컴파일러에게 함수의 존재를 알려야 하기 때문이다.
//나를 호출했던 곳으로 return 해준다.

//포인터 변수

/*
주소를 가르키는 기능을 한다.
*/
//int 포인터 변수가 됨, 주소를 저장하는 변수
//i의 주소값을 pInt에다가 저장


int main(){

    auto a = add(3,4); //add함수 호출

    int i = 100;
    int* pInt =  &i; //선언
    *pInt = 200;
    // cout << *pInt << '\n'; //값을 출력하려면 역참조를 하면된다.
    cout << pInt << '\n';
    int var = 100;
    int *p = &var;
    int value = *p;
    cout << *p << '\n';

    return 0;

}

