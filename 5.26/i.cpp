#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];
int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    fill(a, a + 10, 100);

    for(int i = 0; i < 10; i++){
        cout << a[i] << ' ';
    }
    cout << '\n';
    fill(&b[0][0], &b[9][10], 2);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}