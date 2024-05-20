#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a {2,1,3};
    sort(a.begin(), a.end()); //오름차순으로 정렬후 -> permutation을 돌리면된다.
    do{
        for(int i = 0; i < 2; i ++){
            cout << a[i] << " "; //두번반복하고
        }
        cout << '\n'; //줄바꿈
    } while(next_permutation(a.begin(), a.end()));
}