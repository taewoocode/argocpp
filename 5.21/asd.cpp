#include <bits/stdc++.h>
using namespace std;

int a;
double b;
char c;
int main(){
    scanf("%d %lf %c", &a, &b, &c); //scanf에서 입력받은 이 주소들을 각 a,b,c에 저장한다 &는 엔퍼센드 연산자.
    //%는 형식지정자 %d : 부호 있는 10진수 정수 (int)
    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);
    return 0;
}

