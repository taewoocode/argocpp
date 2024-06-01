#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int b[5]; // 0,1,2,3,4
int main(){
    for(int i = 5; i >= 1; i--) b[i - 1] = i; // 5,4,3,2,1
    for(int i = 5; i >= 1; i--) a.push_back(i); // 5,4,3,2,1
    //오름차순
    sort(b, b + 5); //Array는 b, b + 5
    sort(a.begin(), a.end()); //vector는 a.begin ~ a,end() 형식으로
    for(int i : b) cout << i << ' ';
    cout << '\n';
    for(int i : a) cout << i << ' ';
    cout << '\n';
    reverse(a.begin(), a.end());


    //내림차순
    sort(b, b + 5, greater<int>()); //greater<int>라는 커스텀 타입으로
    sort(a.begin(), a.end(), greater<int>()); //greater<int> customType
    for(int i : b) cout << i << ' ';
    cout << '\n';
    for(int i : a) cout << i << ' ';
    cout << '\n';

    return 0;
}
