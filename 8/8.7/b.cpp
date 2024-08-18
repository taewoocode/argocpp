#include<bits/stdc++.h>
using namespace std;
int a[] = {1,2,3};
int main(){
    do{ 
        //범위기반 forloop사용 한번 반복할 때 마다 a의 요소를 i가 갖게 된다.
        for(int i : a){
            cout << i << ' ';
        }
        cout << '\n';
    } while(next_permutation(&a[0],&a[0] + 3)); // a + 3은 배열의 크기만큼 + N vector는 안됨
    return 0;
}
