#include <bits/stdc++.h>
using namespace std;

int main(){
    // int var = 100;
    // int* p = &var;
    // int** pp = &p;

    // cout << var << '\n'; //var의 값을 출력
    // cout << p << '\n'; //var의 주소를 출력
    // cout << *p << '\n'; //역참조를 하니까 값이 출력된다 변수가 가지고 있는 값이 출력이 된다.
    // cout << pp << '\n'; //p의 주소를 출력
    // cout << *pp << '\n'; //p의 값 출력 var의 주소 출력
    // cout << **pp << '\n'; // p가 가리키는 값, var의 값

    // // return 0;

    // int var = 100;
    // int* p = &var;
    // int value = *p;

    // cout << var << '\n';
    // cout << p << '\n'; //포인터 자료형이기 때문에 
    // cout << *p << '\n'; //역참조를 출력하니 값이 출력되고
    // cout << value << '\n'; //단순하게 생각해서 역참조를 저장하니 값이 출력되고
    

    //참조형 변수
    int aNumber = 97;
    int bNumber = 98;
    int cNumber = 99;

    int& refA = aNumber;
    aNumber = 70;
    cout << aNumber << '\n';
    cout << refA << '\n';

    
    


    //num의 값을 수정했기 때문에 num2에는 영향이 없다.
    //일반변수
    int num = 7;
    int num2 = num;
    num -= -5;

    cout << "num: " << num << '\n';
    cout << "num2: " << num2 << '\n';

    return 0;

}

/*
p는 var의 주소를 저장하고 있다.
*p는 value가 출력이됨 즉 변수가 가지고 있는 값이 출력이 된다. -> 역참조임
pp는 p의 주소를 저장하고 있다. -> p의 주소를 출력한다.
*pp는 -> pp의 value를 출력한다, -> 


*/