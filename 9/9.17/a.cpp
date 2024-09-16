#include<bits/stdc++.h>
using namespace std;
int main(){
    //이 코드는 정상작동하지 않는다.
    //벡터는 동적으로 늘어나는 배열이기 때문에 크기를 미리 지정해주지 않으면 인덱스로 데이터를
    //입력받을 수 없다.
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(auto i : v){
        cout << i << '\n';
    }
    return 0;
}