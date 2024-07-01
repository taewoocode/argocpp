#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int array[3] = {1,2,3};
    cout << "결과" << '\n';
    do{
        for(int i = 0; i < 3; i++){
            cout << array[i] << ' ';
        }
        cout << '\n';
    } while(next_permutation(array, array+3));
    return 0;    
}